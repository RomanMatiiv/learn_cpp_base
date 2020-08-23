#include <iostream>
#include <cmath>

int discriminant(int a, int b, int c)
{

    int D = 0;

    D = b * b - 4 * a * c;

    return D;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int D = 0;
    double root_1 = 0;
    double root_2 = 0;

    std::cin >> a >> b >> c;

    D = discriminant(a,b,c);
    if(D < 0)
    {
        std::cout << "No real roots";
    }
    else if (D == 0)
    {
        root_1 = root_2 = (-b + sqrt(D))/(2*a);
        std::cout << root_1 <<" "<< root_2;
    }
    else
    {
        root_1 = (-b + sqrt(D))/(2*a);
        root_2 = (-b - sqrt(D))/(2*a);

        std::cout << root_1 <<" "<< root_2;
    }

    return 0;
}