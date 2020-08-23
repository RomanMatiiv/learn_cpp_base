#include <iostream>

int main()
{
    int i = 42;
    double d = 3.14;
    const char *s = "C-style string";
    bool flag = false;

    std::cout << "This is an integer " << i << "\n";
    std::cout << "This is a double " << d << "\n";
    std::cout << "This is a \"" << s << "\"\n";  // экранирование символов
    std::cout << "This is a bool " << flag + not flag <<std::endl;
    std::cout << "This is a bool " << flag <<std::endl;
    std::cout << "This is a "<< s << std::endl;
    return 0;
}