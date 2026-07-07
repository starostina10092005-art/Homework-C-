

#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    double celsy = 0.0;
    double foreng = 0.0;

    std::cout << "Введите температуру в Цельсиях: ";
    std::cin >> celsy;

    foreng = celsy * 9 / 5 + 32;

    std::cout << celsy << " °C = " << foreng << std::endl;

    return 0;
}

