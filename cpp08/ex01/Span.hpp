#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span {
    private:
        unsigned int N;

        std::vector<int> data;
    
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        void addNumber(int n);
        long shortestSpan() const;
        long longestSpan() const;

        template <typename Iterator>
        void addNumbers(Iterator begin, Iterator end)
        {
            if (data.size() + std::distance(begin, end) > N)
                throw std::runtime_error("the size is not enough");

            data.insert(data.end(), begin, end);
        }

};

#endif