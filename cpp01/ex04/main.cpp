#include "ft_replace.hpp"

int main(int ac, char **av)
{
    std::string filename;
    std::string buffer;

    if (ac != 4 || !av[1] || !av[2] || !*av[2] || !av[3])
    {
        std::cerr << "Invalid Parameter" << std::endl;
        return (1);
    }
    filename = av[1];
    std::ifstream f_read(filename.c_str());
    std::ofstream f_write(filename.append(".replace").c_str());
    if (!f_read.is_open() || !f_write.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        f_read.close();
        f_write.close();
        return (1);
    }
    while (std::getline(f_read, buffer))
    {
        ft_replace(buffer, av[2], av[3]);
        f_write << buffer << std::endl;
    }
    f_read.close();
    f_write.close();
    return (0);
}
