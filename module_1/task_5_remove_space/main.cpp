#include <iostream>

int main()
{
    char c = '\0';
    bool previous_not_space = true;
    while (std::cin.get(c))
    {
        if(c != ' ')
        {
            std::cout << c;
            previous_not_space = true;
        }
        else if(previous_not_space)
        {
            std::cout << c;
            previous_not_space  = false;
        }
    }

    return 0;
}