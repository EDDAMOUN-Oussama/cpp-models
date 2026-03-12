#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();
        std::string getIdeaByid(int id);
        void setIdeaByid(std::string idea, int id);
        void write_idea(int id);
};

#endif