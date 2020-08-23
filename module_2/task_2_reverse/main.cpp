#include <iostream>

void reverse_input()
{
    int val = 0;
    std::cin >> val;

    if (val != 0)
    {
        reverse_input();
        std::cout << val << " ";
    }
}

int main()
{
    reverse_input();
    return 0;
}