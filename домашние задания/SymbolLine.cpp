

#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int symbolCount = 0;
    int i = 0;
    char symbol = '=';
    char direction = '-';

    std::cout << "Введите кол-во символов: ";
    std::cin >> symbolCount;
    if (symbolCount <= 0) {
        std::cout << "Неверный выбор!";
        return 0;
    }
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    std::cout << "Введите направление линии ('-' - горизонтальная, '|' - вертикальная): ";
    std::cin >> direction;

    if (direction == '-') {
        while (i < symbolCount) {
            std::cout << symbol;
            i++;
        }
    }
    else if (direction == '|') {
        while (i < symbolCount) {
            std::cout << symbol << std::endl;
            i++;
        }
    }
    else {
        std::cout << "Неизвестное направление! Используйте '-' или '|'." << std::endl;
        return 0;
    }
    return 0;
}
