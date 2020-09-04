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

void pprint_matrix(int** matrix, int n_rows, int n_cols)
{
    for (int i = 0; i < n_rows; ++i)
    {
        for (int j = 0; j < n_cols; ++j)
        {
            std::cout<< matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/**
 * Находит индекс строки, в которой содержится минимальный элемент
 * @param array маввив
 * @param rows кол-во строк
 * @param cols кол-во столбцов
 * @return индекс строки
 */
int find_index_row_with_min(int** array, unsigned rows, unsigned cols)
{
    int min_row_index = 0;
    int min_val = std::numeric_limits<int>::max();

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (array[i][j] < min_val)
            {
                min_val = array[i][j];
                min_row_index = i;
            }
        }
    }

    return min_row_index;
}

/**
 * Меняет строку с наименьшим элементом местами с первой строкой массива
 * @param m : массив
 * @param rows : кол-во строк
 * @param cols : кол-во столбцов
 */
void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min_row = 0;
    min_row = find_index_row_with_min(m,rows,cols);

    for (int i = 0; i < cols; ++i)
    {
        std::swap(m[0][i],m[min_row][i]);

    }
}

int main()
{
    int init_val = 99;
    int rows = 3;
    int cols = 2;

    // Создание матрицы
    int** arr = create_2d_array(rows, cols);

    // Заполнение матрицы
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = init_val--;
        }
    }

    std::cout << "Исходный массив"<< std::endl;
    pprint_matrix(arr,rows,cols);

    swap_min(arr,rows,cols);

    std::cout << "Измененный массив"<< std::endl;
    pprint_matrix(arr,rows,cols);

    remove_2d_array(arr,rows, cols);

    return 0;

}
