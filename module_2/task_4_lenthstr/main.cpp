#include <iostream>

unsigned lenstr(const char *str)
{
    unsigned len = 0;

    int i = 0;
    while (str[i]!='\0')
    {
        len += 1;
        i += 1;
    }

    return len;
}

int main()
{
    char str[] = "Hello world";

    std::cout<< lenstr(str);

    return 0;
}