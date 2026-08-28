#include <iostream>
#include <vector>

void printStack(const std::vector<int>& v)
{
    if (v.empty())
        std::cout << "Empty";
    for (auto i : v)
        std::cout << i << ' ';
    std::cout << "\tLength: " << v.size() << "\tCapacity: " << v.capacity() << '\n';
}

int main()
{
    std::vector<int> stack {};

    printStack(stack);

    stack.push_back(1);
    printStack(stack);

    stack.push_back(2);
    printStack(stack);

    stack.push_back(3);
    printStack(stack);

    std::cout << "Top: " << stack.back() << '\n';

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    return 0;
}