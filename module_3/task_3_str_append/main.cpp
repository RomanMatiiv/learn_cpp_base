//Нужно реализовать метод append — он добавляет копию строки-аргумента в конец текущей строки
// (т.е. в конец строки, у которой он был вызван).
//При выполнении задания будьте аккуратны при работе с памятью — при вызове метода не должно возникать утечек памяти.
// Кроме того, не забудьте, что size хранит размер без учета завершающего 0 символа.
//
//Требования к реализации: при реализации вы можете заводить любые вспомогательные функции и методы.
// В шаблоне вы увидите объявления уже известных вам конструкторов и деструкторов, реализовывать их заново не нужно, они уже реализованы.
// Вводить или выводить что-либо не нужно. Реализовывать main не нужно. Для работы с памятью не используйте функции из cstdlib (malloc, realloc, calloc и free).
//
//Кроме того, ваша реализация должна корректно работать в следующем тесте:
//String s("Hello");
//s.append(s); // теперь s хранит "HelloHello"

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>


struct String {
    size_t size;
    char *str;

    explicit String(const char *str = "")
    {
        this->size = std::strlen(str);
        this->str = new char[this->size + 1];

        std::strcpy(this->str, str);
    }

    String(size_t n, char c) {
        this->size = n;
        this->str = new char[n + 1];

        for (int i = 0; i < n; ++i) {
            this->str[i] = c;
        }
        this->str[n] = '\0';
    }

    ~String() {
        delete[] this->str;
    }

    void append(String &other)
    {
        unsigned new_size = other.size + this->size;
        char *appended_str = new char[new_size + 1];

//        std::memmove(appended_str, this->str, this->size); // Если делать так, то будет ошибка, хз почему
        std::strcpy(appended_str, this->str);

        std::strcat(appended_str,other.str);

        delete[] this->str;

        this->size = new_size;
        this->str = appended_str;
        this->str[new_size] = '\0';
    }
};

int main()
{
    String a (5,'a');
    String b ("two");
    a.append(b);

    std::cout << a.str << std::endl;

    String c("Hello");
    c.append(c);

    std::cout << c.str << std::endl;

    return 0;
}