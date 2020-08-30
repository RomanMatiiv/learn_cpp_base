//Напишите функцию, которая принимает на вход целочисленную матрицу M
// (другими словами, просто двумерный целочисленный массив) размера rows×cols,
// и возвращает транспонированную матрицу M^TM
//(тоже двумерный целочисленный массив) размера cols×rows.
//
// Если в M на пересечении ii-ой строки и jj-ого столбца стояло число x,
// то на пересечении  jj-ой строки и ii-ого столбца в матрице M^T тоже будет стоять число xx,
// или другими словами M^T[j][i] = M[i][j]M
//
//Обратите внимание, что вам неизвестно, каким именно способом выделялась память для массива M.
// Выделять память под массив M^T можете любым удобным вам способом.
// Изменять исходную матрицу нельзя.
#include <iostream>

// TODO переделать с учетом того, что матрица может быть не квадратная (rows!=cols)
int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int** t_arr = new int* [rows];

    for (int i = 0; i < rows; ++i)
    {
        t_arr[i] = new int[cols];

        for (int j = 0; j < cols; ++j)
        {
            t_arr[i][j] = m[j][i];
        }
    }

    return t_arr;
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

int main()
{
    // Создание матрицы
    int init_val = 10;
    int n_rows = 5;
    int n_cols = 5;

    int** arr = new int*[n_rows];

    for (int i = 0; i < n_rows; ++i)
    {
        arr[i] = new int[n_cols];

        for (int j = 0; j < n_cols; ++j)
        {
            arr[i][j] = init_val++;
        }
    }

    std::cout << "Исходный массив"<< std::endl;
    pprint_matrix(arr,n_rows,n_cols);

    std::cout << "Транспонирванный массив"<< std::endl;
    int** t_arr = new int* [n_cols];
    t_arr = transpose(arr,n_rows,n_cols);
    pprint_matrix(t_arr,n_rows,n_cols);

    // Удаление созданных ранее матриц
    for (int i = 0; i < n_rows; ++i)
    {
        delete[] arr[i];
        delete [] t_arr[i];
    }
    delete [] arr;
    delete [] t_arr;

    return 0;

}
