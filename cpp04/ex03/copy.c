#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void process_directory(const char *path, FILE *out);

void copy_file(const char *filepath, const char *filename, FILE *out)
{
    FILE *in = fopen(filepath, "r");
    if (!in) return;

    fprintf(out, "%s\n", filename);

    char buffer[BUFFER_SIZE];
    size_t n;

    while ((n = fread(buffer, 1, BUFFER_SIZE, in)) > 0)
    {
        fwrite(buffer, 1, n, out);
    }

    fprintf(out, "\n");

    fclose(in);
}

void process_directory(const char *path, FILE *out)
{
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (!dir) return;

    while ((entry = readdir(dir)) != NULL)
    {
        if (strcmp(entry->d_name, ".") == 0 ||
            strcmp(entry->d_name, "..") == 0)
            continue;

        char fullpath[1024];
        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name);

        struct stat st;
        stat(fullpath, &st);

        if (S_ISDIR(st.st_mode))
        {
            process_directory(fullpath, out);
        }
        else if (S_ISREG(st.st_mode))
        {
            if (strcmp(entry->d_name, "save.txt") != 0)
                copy_file(fullpath, entry->d_name, out);
        }
    }

    closedir(dir);
}

int main()
{
    FILE *out = fopen("save.txt", "w");
    if (!out)
    {
        perror("Cannot create save.txt");
        return 1;
    }

    process_directory(".", out);

    fclose(out);
    return 0;
}