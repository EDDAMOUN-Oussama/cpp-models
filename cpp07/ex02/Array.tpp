#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array(): data(new T[0]()), len(0){}

template <typename T>
Array<T>::Array(unsigned int n): data(new T[n]()), len(n){}

template <typename T>
Array<T>::Array(const Array& other): data(new T[other.size()]()), len(other.size())
{
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] data;
        len = other.size();
        data = new T[len]();
        for (unsigned int i = 0; i < len; i++)
            data[i] = other.data[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= len)
        throw std::exception();
    return (data[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= len)
        throw std::exception();
    return (data[index]);
}

template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (len);
}

#endif