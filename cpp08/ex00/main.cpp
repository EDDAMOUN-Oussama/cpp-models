#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;

    numbers.push_back(4);
    numbers.push_back(1);
    numbers.push_back(7);
    numbers.push_back(3);
    numbers.insert(numbers.begin(), 99);
    try
    {
        std::vector<int>::iterator it;

        it = easyfind(numbers, 7);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}