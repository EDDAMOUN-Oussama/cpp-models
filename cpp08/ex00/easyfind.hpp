#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& cont, int n)
{
    typename T::iterator it;

    it = std::find(cont.begin(), cont.end(), n);

    if (it == cont.end())
        throw std::runtime_error("Value not found");

    return it;
}

#endif