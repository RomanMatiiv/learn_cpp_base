#include <iostream>

void test(int a)
{
    std::cout<< &a << std::endl;
}

int main()
{
//    char c = '\0';  // посимвольный ввод
//    while (std::cin.get(c))
//    { // на каждой итерации считываем один символ в переменную c
//        /* здесь можно пользоваться значением прочитанным в переменную c */
//        std::cout << c;
//    }

    int b = 10;
    std::cout << &b << std::endl;
    test(b);
}