#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    (void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    (void)other;
    return (*this);
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::isPositiveInteger(const std::string& str)
{
    std::string limit = "2147483647";
    std::string clean;
    std::size_t i = 0;

    if (str.empty())
        return (false);
    while (i < str.length() - 1 && str[i] == '0')
        i++;

    clean = str.substr(i);
    if (clean.empty())
        return (false);

    for (std::size_t j = 0; j < str.length(); j++)
    {
        if (str[j] < '0' || str[j] > '9')
            return (false);
    }

    if (clean.length() > limit.length())
        return (false);

    if (clean.length() == limit.length() && clean > limit)
        return (false);

    return (true);
}

int PmergeMe::stringToInt(const std::string& str)
{
    std::stringstream ss(str);
    int value;

    ss >> value;
    return (value);
}

void PmergeMe::validateInput(int argc, char **argv)
{
    if (argc < 2)
        throw std::runtime_error("Error");

    for (int i = 1; i < argc; i++)
    {
        if (!isPositiveInteger(argv[i]))
            throw std::runtime_error("Error");
    }
}

std::vector<int> PmergeMe::createVector(int argc, char **argv)
{
    std::vector<int> container;

    for (int i = 1; i < argc; i++)
        container.push_back(stringToInt(argv[i]));

    return (container);
}

std::deque<int> PmergeMe::createDeque(int argc, char **argv)
{
    std::deque<int> container;

    for (int i = 1; i < argc; i++)
        container.push_back(stringToInt(argv[i]));

    return (container);
}

void PmergeMe::printBefore(int argc, char **argv)
{
    std::cout << "Before: ";

    for (int i = 1; i < argc; i++)
    {
        std::cout << argv[i];
        if (i + 1 < argc)
            std::cout << " ";
    }

    std::cout << std::endl;
}

void PmergeMe::printVector(const std::vector<int>& container)
{
    std::cout << "After: ";

    for (std::size_t i = 0; i < container.size(); i++)
    {
        std::cout << container[i];
        if (i + 1 < container.size())
            std::cout << " ";
    }

    std::cout << std::endl;
}

std::vector<int> PmergeMe::generateJacobsthalOrderVector(int size)
{
    std::vector<int> order;

    if (size <= 0)
        return (order);

    order.push_back(1);

    int previous = 1;
    int current = 3;

    while (current <= size)
    {
        for (int i = current; i > previous; i--)
            order.push_back(i);

        int next = current + 2 * previous;
        previous = current;
        current = next;
    }

    for (int i = size; i > previous; i--)
        order.push_back(i);

    return (order);
}

std::deque<int> PmergeMe::generateJacobsthalOrderDeque(int size)
{
    std::deque<int> order;

    if (size <= 0)
        return (order);

    order.push_back(1);

    int previous = 1;
    int current = 3;

    while (current <= size)
    {
        for (int i = current; i > previous; i--)
            order.push_back(i);

        int next = current + 2 * previous;
        previous = current;
        current = next;
    }

    for (int i = size; i > previous; i--)
        order.push_back(i);

    return (order);
}

void PmergeMe::binaryInsertVector(std::vector<int>& chain, int value, int end)
{
    int left = 0;
    int right = end;

    if (right > static_cast<int>(chain.size()))
        right = static_cast<int>(chain.size());

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (chain[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }

    chain.insert(chain.begin() + left, value);
}

void PmergeMe::binaryInsertDeque(std::deque<int>& chain, int value, int end)
{
    int left = 0;
    int right = end;

    if (right > static_cast<int>(chain.size()))
        right = static_cast<int>(chain.size());

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (chain[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }

    chain.insert(chain.begin() + left, value);
}

int PmergeMe::findInVector(const std::vector<int>& container, int value)
{
    for (std::size_t i = 0; i < container.size(); i++)
    {
        if (container[i] == value)
            return (static_cast<int>(i));
    }
    return (-1);
}

int PmergeMe::findInDeque(const std::deque<int>& container, int value)
{
    for (std::size_t i = 0; i < container.size(); i++)
    {
        if (container[i] == value)
            return (static_cast<int>(i));
    }
    return (-1);
}

void PmergeMe::fordJohnsonVector(std::vector<int>& container)
{
    if (container.size() <= 1)
        return;

    std::vector< std::pair<int, int> > pairs;
    std::vector<int> mainChain;
    std::vector<int> pending;
    bool hasOdd = false;
    int oddValue = 0;

    for (std::size_t i = 0; i < container.size(); i += 2)
    {
        if (i + 1 >= container.size())
        {
            hasOdd = true;
            oddValue = container[i];
            break;
        }

        int first = container[i];
        int second = container[i + 1];

        if (first > second)
            pairs.push_back(std::make_pair(first, second));
        else
            pairs.push_back(std::make_pair(second, first));
    }

    for (std::size_t i = 0; i < pairs.size(); i++)
        mainChain.push_back(pairs[i].first);

    fordJohnsonVector(mainChain);

    for (std::size_t i = 0; i < mainChain.size(); i++)
    {
        for (std::size_t j = 0; j < pairs.size(); j++)
        {
            if (pairs[j].first == mainChain[i])
            {
                pending.push_back(pairs[j].second);
                break;
            }
        }
    }

    if (!pending.empty())
        mainChain.insert(mainChain.begin(), pending[0]);

    std::vector<int> order = generateJacobsthalOrderVector(static_cast<int>(pending.size()));

    for (std::size_t i = 0; i < order.size(); i++)
    {
        int index = order[i] - 1;

        if (index == 0)
            continue;

        if (index >= static_cast<int>(pending.size()))
            continue;

        int value = pending[index];
        int relatedBig = 0;

        for (std::size_t j = 0; j < pairs.size(); j++)
        {
            if (pairs[j].second == value)
            {
                relatedBig = pairs[j].first;
                break;
            }
        }

        int end = findInVector(mainChain, relatedBig);

        if (end == -1)
            end = static_cast<int>(mainChain.size());

        binaryInsertVector(mainChain, value, end);
    }

    if (hasOdd)
        binaryInsertVector(mainChain, oddValue, static_cast<int>(mainChain.size()));

    container = mainChain;
}

void PmergeMe::fordJohnsonDeque(std::deque<int>& container)
{
    if (container.size() <= 1)
        return;

    std::deque< std::pair<int, int> > pairs;
    std::deque<int> mainChain;
    std::deque<int> pending;
    bool hasOdd = false;
    int oddValue = 0;

    for (std::size_t i = 0; i < container.size(); i += 2)
    {
        if (i + 1 >= container.size())
        {
            hasOdd = true;
            oddValue = container[i];
            break;
        }

        int first = container[i];
        int second = container[i + 1];

        if (first > second)
            pairs.push_back(std::make_pair(first, second));
        else
            pairs.push_back(std::make_pair(second, first));
    }

    for (std::size_t i = 0; i < pairs.size(); i++)
        mainChain.push_back(pairs[i].first);

    fordJohnsonDeque(mainChain);

    for (std::size_t i = 0; i < mainChain.size(); i++)
    {
        for (std::size_t j = 0; j < pairs.size(); j++)
        {
            if (pairs[j].first == mainChain[i])
            {
                pending.push_back(pairs[j].second);
                break;
            }
        }
    }

    if (!pending.empty())
        mainChain.insert(mainChain.begin(), pending[0]);

    std::deque<int> order = generateJacobsthalOrderDeque(static_cast<int>(pending.size()));

    for (std::size_t i = 0; i < order.size(); i++)
    {
        int index = order[i] - 1;

        if (index == 0)
            continue;

        if (index >= static_cast<int>(pending.size()))
            continue;

        int value = pending[index];
        int relatedBig = 0;

        for (std::size_t j = 0; j < pairs.size(); j++)
        {
            if (pairs[j].second == value)
            {
                relatedBig = pairs[j].first;
                break;
            }
        }

        int end = findInDeque(mainChain, relatedBig);

        if (end == -1)
            end = static_cast<int>(mainChain.size());

        binaryInsertDeque(mainChain, value, end);
    }

    if (hasOdd)
        binaryInsertDeque(mainChain, oddValue, static_cast<int>(mainChain.size()));

    container = mainChain;
}

void PmergeMe::process(int argc, char **argv)
{
    validateInput(argc, argv);

    printBefore(argc, argv);

    clock_t startVector = clock();
    std::vector<int> vectorContainer = createVector(argc, argv);
    fordJohnsonVector(vectorContainer);
    clock_t endVector = clock();

    clock_t startDeque = clock();
    std::deque<int> dequeContainer = createDeque(argc, argv);
    fordJohnsonDeque(dequeContainer);
    clock_t endDeque = clock();

    printVector(vectorContainer);

    double vectorTime = static_cast<double>(endVector - startVector)
        / CLOCKS_PER_SEC * 1000000.0;

    double dequeTime = static_cast<double>(endDeque - startDeque)
        / CLOCKS_PER_SEC * 1000000.0;

    int size = argc - 1;

    std::cout << "Time to process a range of " << size
              << " elements with std::vector : "
              << vectorTime << " us" << std::endl;

    std::cout << "Time to process a range of " << size
              << " elements with std::deque : "
              << dequeTime << " us" << std::endl;
}