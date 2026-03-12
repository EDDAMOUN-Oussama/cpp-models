#include "ft_replace.hpp"

void ft_replace(std::string& buffer, std::string s1, std::string s2)
{
    size_t pos = 0;
    while (1)
    {
        pos = buffer.find(s1, pos);
        if (pos == std::string::npos)
            break;
        buffer.erase(pos, s1.length());
        buffer.insert(pos, s2);
        pos += s2.length(); 
    }
}