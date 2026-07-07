#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    unsigned int number = 0;

    std::cout << "Введите число: ";
    std::cin >> number;

    number = number % 10;
    std::cout << "Последняя цифра: " << number << std::endl;

    return 0;
}

