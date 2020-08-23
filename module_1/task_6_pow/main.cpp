#include <iostream>

int pow(int value, int degree)
/**
 *
 * Возведение в @value в степень @degree
 * @param value: число которое нужно возвести в степень
 * @param degree: степень
 * @return: value^degree
 */
{
    int result = 1;
    for (int i = 0; i < degree; ++i)
    {
        result *= value;
    }
    return result;
}


int main()
{
    int _ = 0;
    std::cin >> _;

    int cur_a = 0;
    while (std::cin >> cur_a)
    {

        int degree = 0;
        while (pow(2, degree) < cur_a)
        {
            degree+=1;
        }

        if (pow(2, degree) > cur_a)
        {
            degree-=1;
        }
        std::cout << degree << std::endl;
    }

    return 0;
}
