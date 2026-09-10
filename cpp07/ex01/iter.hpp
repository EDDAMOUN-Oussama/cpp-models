#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, const int len, void (*f)(T &arg))
{
    if (!array || !f)
        return;

    for (int i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void iter(const T *array, const int len, void (*f)(const T &arg))
{
    if (!array || !f)
        return;

    for (int i = 0; i < len; i++)
        f(array[i]);
}

#endif
