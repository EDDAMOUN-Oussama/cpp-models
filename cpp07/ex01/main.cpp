#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x++;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "Before increment:" << std::endl;
    iter(numbers, 5, print);

    iter(numbers, 5, increment);

    std::cout << "After increment:" << std::endl;
    iter(numbers, 5, print);

     std::string words[] = {"hello", "cpp", "templates"};

    std::cout << "Const array:" << std::endl;
    iter(words, 3, print);

    return 0;
}