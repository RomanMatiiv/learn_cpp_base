#include <iostream>

void str_cat(char *to, const char *from)
{
    while(*to!='\0')
        to++;

    while(*from!='\0')
    {
        *to = *from;
        from++;
        to++;

    }
    *to = '\0';
}

int main()
{
    char to[] = "hello";
    char from[] = "world";

    str_cat(to,from);

    std::cout << to << std::endl;
    int i = 0;
    while (to[i]!='\0')
    {
        i++;
    }
    std::cout << to[i];
    return 0;
}