
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    unsigned int factorial = 0;
    int product = 1;
    int i = 1;

    std::cout << "Введите число для вычисления факториала: ";
    std::cin >> factorial;

    if (factorial == 0) {
        std::cout << "0! = 1 (факториал равен нулю, по определению факториала)" << std::endl;
    }
    else {
        while (i <= factorial) {
            product = i * product;
            i++;
        }
        std::cout << "Факториал числа " << factorial << "!: " << product << std::endl;
    }


    return 0;
}

