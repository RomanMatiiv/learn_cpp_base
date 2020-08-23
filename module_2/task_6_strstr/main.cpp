#include <iostream>


bool pattern_in_sub_text(const char *sub_text, const char *pattern)
{
    while (*sub_text == *pattern)
    {
        sub_text++;
        pattern++;
    }

    return *pattern == '\0';
}


int str_str(const char *text, const char *pattern)
{
    int index = 0;

    // обработка пустого шаблона
    if (*pattern == '\0')
        return index;

    // обработка не пустого шаблона
    while (text[index])
    {
        if (pattern_in_sub_text(&text[index], pattern))
            return index;
        else
            index++;
    }

    return -1;
}


int main()
{

    char text[] = "hello world";
    char pattern[] = "ll";

    int index = 0;
    index = str_str(text,pattern);

    std::cout << index << std::endl;

    return 0;
}