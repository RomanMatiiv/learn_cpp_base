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
/**
 * Создает 2d матирцу
 * Без сегментации памяти
 * @param n_rows : кол-во строк
 * @param n_cols : кол-во столбцов
 * @return матрица
 */
int** create_2d_array(unsigned n_rows, unsigned n_cols)
{
    int** arr = new int* [n_rows];
    arr[0] = new int[n_rows*n_cols];

    for (int i = 1; i < n_rows; ++i)
    {
        arr[i] = &arr[0][i*n_cols];
    }

    return arr;
}

/**
 * Удаляет двумерный массив
 * Созданный с помощью create_2d_array
 * Те созданный без фрагментации памяти
 * @param array : массив, который нужно удалить
 */
void remove_2d_array(int** array)
{
    delete [] array[0];
    delete [] array;
}

/**
 * Транспонирует матрицу
 * Рабатает не совсем как математическое транспонирование а скорее как переварачивание
 *
 * @param m: исходная матрица
 * @param rows: кол-во строк в исходной матрице
 * @param cols: кол-во столбцов в исзодной матрице
 * @return транспонированная(перевернутая) матрица
 * @example
 * \n Исходный массив \n
    10 11 \n
    12 13 \n
    14 15 \n
    16 17 \n
    18 19 \n
    Транспонирванный(перевернутый) массив \n
    10 12 14 16 18 \n
    11 13 15 17 19 \n

 */
int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    unsigned cols_in_t = rows;
    unsigned rows_in_t = cols;

    int** t_arr = create_2d_array(rows_in_t, cols_in_t);

    for (int i = 0; i < rows_in_t; ++i)
    {
        for (int j = 0; j < cols_in_t; ++j)
        {
            t_arr[i][j] = m[j][i];
        }
    }

    return t_arr;
}

/**
 * Выводит матрицу в stdout в удобном виде
 * @param matrix : матрица
 * @param n_rows : кол-во строк
 * @param n_cols : кол-во столбцов
 */
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

    int init_val = 10;
    int n_rows = 5;
    int n_cols = 2;

    // Создание матрицы
    int** arr = create_2d_array(n_rows, n_cols);

    // Заполнение матрицы
    for (int i = 0; i < n_rows; ++i)
    {
        for (int j = 0; j < n_cols; ++j)
        {
            arr[i][j] = init_val++;
        }
    }

    std::cout << "Исходный массив"<< std::endl;
    pprint_matrix(arr,n_rows,n_cols);

    std::cout << "Транспонирванный массив"<< std::endl;
    int** t_arr = transpose(arr,n_rows,n_cols);
    pprint_matrix(t_arr,n_cols,n_rows);

    // Удаление созданных ранее матриц
    remove_2d_array(arr);
    remove_2d_array(t_arr);

    return 0;

}
