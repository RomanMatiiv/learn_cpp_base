//Реализуйте функцию swap_min, которая принимает на вход двумерный массив целых чисел,
// ищет в этом массиве строку, содержащую наименьшее среди всех элементов массива значение,
// и меняет эту строку местами с первой строкой массива.
//
//Подумайте, как обменять строки массива, не обменивая элементы строк по-отдельности

#include <algorithm>
#include <iostream>

int** create_2d_array(unsigned rows, unsigned cols)
{
    int** array = new int* [rows];
    array[0] = new int[rows*cols];

    for (int i = 1; i < rows ; ++i)
    {
        array[i] = &array[0][i*cols];
    }

    return array;
}

void remove_2d_array(int** array,unsigned rows, unsigned cols)
{
    delete [] array[0];
    delete [] array;
}

//TODO протестировать
int* find_row_with_min(int** array, unsigned rows, unsigned cols)
{
    int* min_row = nullptr;
    int min_val = std::numeric_limits<int>::max();
    int cur_min = 0;

    for (int i = 0; i < rows; ++i)
    {
        cur_min = **(std::min_element(&array[i],&array[i+cols]));

        if (cur_min < min_val)
        {
            min_val = cur_min;
            min_row = array[i];
        }
    }

    return min_row;
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    /* ... */
}

int main()
{
//    int arr [] = {4,1,0,4};
    int arr [3][2] = {{4,1},{1,0},{3,7}};

    std::cout << **std::min_element(&arr[0],&arr[2]);

    return 0;

}
