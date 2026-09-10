#include "MutantStack.hpp"

int main()
{
    std::cout << "===== Subject test =====" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << "\n===== Stack behavior test =====" << std::endl;

    MutantStack<int> test;

    test.push(10);
    test.push(20);
    test.push(30);

    std::cout << "top: " << test.top() << std::endl;
    std::cout << "size: " << test.size() << std::endl;

    test.pop();

    std::cout << "top after pop: " << test.top() << std::endl;
    std::cout << "size after pop: " << test.size() << std::endl;

    std::cout << "\n===== Iterator test =====" << std::endl;

    for (MutantStack<int>::iterator it2 = test.begin(); it2 != test.end(); ++it2)
    {
        std::cout << *it2 << std::endl;
    }

    std::cout << "\n===== Copy test =====" << std::endl;

    MutantStack<int> copy(test);

    copy.push(99);

    std::cout << "original top: " << test.top() << std::endl;
    std::cout << "copy top    : " << copy.top() << std::endl;

    std::cout << "\n===== Assignment test =====" << std::endl;

    MutantStack<int> assigned;
    assigned = test;

    assigned.push(777);

    std::cout << "original top: " << test.top() << std::endl;
    std::cout << "assigned top: " << assigned.top() << std::endl;

    return 0;
}