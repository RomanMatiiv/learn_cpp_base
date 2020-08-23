#include <iostream>
#include <cstring>


/*!
 * выделяет память размера new_size,
 * скопирует в нее данные из переданной области памяти,
 * освободить старую область памяти и вернуть выделенную область памяти нового размера со скопированными данными
 * @param str: указатель на область в памяти
 * @param size: старый размер
 * @param new_size: новый размер
 * @return указатель на начало новой области в пямяти
 */

//version 1 custom
//char *resize(const char *str, unsigned size, unsigned new_size)
//{
//    char* new_srt = new char[new_size];
//
//    unsigned min_size = new_size < size ? new_size : size;
//
//    for (int i = 0; i < min_size; ++i)
//    {
//        new_srt[i] = str[i];
//    }
//
//    delete [] str;
//
//    return new_srt;
//}
//char* resize(const char* str, unsigned size, unsigned new_size)
//{
//    char* new_str = new char[new_size];
//    std::memmove(new_str,str, new_size);
//
//    delete [] str;
//
//    return new_str;
//}

char* resize(const char* str, unsigned size, unsigned new_size)
{
    char* new_str = new char[new_size];
    std::memcpy(new_str,str, new_size);

    delete [] str;

    return new_str;
}


int main()
{
    char* text = new char[5];
    text[0] = 'f';
    text[1] = 'g';
    text[2] = 'b';

    char* a = resize(text,5,10);

//    char* a = text;

    while(*a)
    {
        std::cout << *a;
        a++;
    }

    return 0;
}



//#include <cstring>
//char *resize(const char *str, unsigned size, unsigned new_size)
//{
//    char* result = new char[new_size];
//    memcpy(result,str,new_size >= size ? size : new_size);
//    delete [] str;
//    return result;
//}