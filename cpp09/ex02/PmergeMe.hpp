#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>
#include <climits>

class PmergeMe
{
private:
    PmergeMe();

    static bool isPositiveInteger(const std::string& str);
    static int  stringToInt(const std::string& str);
    static void validateInput(int argc, char **argv);

    static std::vector<int> createVector(int argc, char **argv);
    static std::deque<int>  createDeque(int argc, char **argv);

    static void printBefore(int argc, char **argv);
    static void printVector(const std::vector<int>& container);

    static std::vector<int> generateJacobsthalOrderVector(int size);
    static std::deque<int>  generateJacobsthalOrderDeque(int size);

    static void binaryInsertVector(std::vector<int>& chain, int value, int end);
    static void binaryInsertDeque(std::deque<int>& chain, int value, int end);

    static int findInVector(const std::vector<int>& container, int value);
    static int findInDeque(const std::deque<int>& container, int value);

    static void fordJohnsonVector(std::vector<int>& container);
    static void fordJohnsonDeque(std::deque<int>& container);

public:
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    static void process(int argc, char **argv);
};

#endif