
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    std::cout << "=================================\t\n";
    std::cout << "|Тип данных\t|Кол-во байт\t|" << std::endl;
    std::cout << "|bool       \t|" << sizeof(bool) << "\t\t|" << std::endl;
    std::cout << "|char       \t|" << sizeof(char) << "\t\t|" << std::endl;
    std::cout << "|short       \t|" << sizeof(short) << "\t\t|" << std::endl;
    std::cout << "|int       \t|" << sizeof(int) << "\t\t|" << std::endl;
    std::cout << "|unsigned int \t|" << sizeof(unsigned int) << "\t\t|" << std::endl;
    std::cout << "|long       \t|" << sizeof(long) << "\t\t|" << std::endl;
    std::cout << "|long long   \t|" << sizeof(long long) << "\t\t|" << std::endl;
    std::cout << "|float       \t|" << sizeof(float) << "\t\t|" << std::endl;
    std::cout << "|double       \t|" << sizeof(double) << "\t\t|" << std::endl;
    std::cout << "=================================\t\n";
 
}

