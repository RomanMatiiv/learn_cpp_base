#include <iostream>
#include <string>

void shifting(int a[], unsigned size)
{
    int buffer = a[0];

    for (int i = 0; i < size - 1; ++i)
    {
        a[i] = a[i+1];
    }
    a[size-1] = buffer;
}

void rotate(int a[], unsigned size, int shift)
{
    shift = shift % size;

    for (int i = 0; i < shift; ++i)
    {
        shifting(a,size);
    }

}
