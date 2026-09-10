#include "Span.hpp"

Span::Span(): N(0){};
Span::Span(unsigned int n): N(n){};

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        N = other.N;
        data = other.data;
    }
    return (*this);
}

Span::~Span(){};

void Span::addNumber(int n)
{
    if (data.size() >= N)
        throw std::runtime_error("the size not enough");
    data.push_back(n);
}

long Span::shortestSpan() const
{
    if (data.size() < 2)
        throw std::runtime_error("the numbers exist not enough");
    std::vector<int> tmp;
    tmp = data;
    std::sort(tmp.begin(), tmp.end());
    long des = static_cast<long>(tmp[1]) - static_cast<long>(tmp[0]);
    for (size_t i = 0; i + 1 < tmp.size(); ++i)
    {
        long diff = static_cast<long>(tmp[i + 1]) - static_cast<long>(tmp[i]);
        des = std::min(des, diff);
    }
    return (des);
    
}

long Span::longestSpan() const
{
    long des;
    if (data.size() < 2)
        throw std::runtime_error("the numbers exist not enough");
    std::vector<int> tmp;
    tmp = data;
    std::sort(tmp.begin(), tmp.end());
    des = static_cast<long>(tmp.back()) - static_cast<long>(tmp.front());
    return (des);

}