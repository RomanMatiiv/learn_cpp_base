#include <iostream>

int main()
{
    int i = 42;
    double d = 3.14;
    int c = 0;

    std::cout << "Enter an integer and a double:\n";
    std::cin >> i >> d >> c;
    std::cout << "Your input is " << i << ", " << d <<"\t"<< c <<std::endl;

    return 0;
}