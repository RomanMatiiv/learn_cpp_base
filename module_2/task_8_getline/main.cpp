//Реализуйте функцию getline, которая считывает поток ввода посимвольно,
// пока не достигнет конца потока или не встретит символ переноса строки ('\n'),
// и возвращает C-style строку с прочитанными символами.
//
//Обратите внимание, что так как размер ввода заранее неизвестен,
// то вам нужно будет перевыделять память в процессе чтения,
// если в потоке ввода оказалось больше символов, чем вы ожидали.
//
//Память, возвращенная из функции будет освобождена оператором delete[].
// Символ переноса строки ('\n') добавлять в строку не нужно,
// но не забудьте, что в конце C-style строки должен быть завершающий нулевой символ.

#include <iostream>
#include <cstring>
char* resize(const char* str, unsigned size, unsigned new_size)
{
    char* new_str = new char[new_size];
    std::memcpy(new_str,str, new_size);

    delete [] str;

    return new_str;
}


char* getline()
{
    int iter = 0;
    int size = 2;
    int new_size = 0;

    char* result = new char [size];

    char cur_symbol = '\0';

    while(std::cin.get(cur_symbol) &&
          cur_symbol != '\n' &&
          cur_symbol != EOF)
    {
        if(iter>=size)
        {
            new_size = size * 2;
            result = resize(result,size,new_size);
            size = new_size;
        }

        result[iter] = cur_symbol;

        iter++;
    }

    result[iter] = '\0';

    return result;
}



int main()
{
    std::cout << getline();
    return 0;
}