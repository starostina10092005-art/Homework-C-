
#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");
    double a, b;
    double result;
    char operation;


    std::cout << "Введите два числа(через пробел): ";
    std::cin >> a >> b;

    std::cout << "Введите арефметическое дейстрие(+, -, *, /, максимум = m, минимум = n): ";
    std::cin >> operation;

    if (operation == '+') {
        result = a + b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == '-') {
        result = a - b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == '*') {
        result = a * b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == '/') {
        result = a / b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == 'm') {
        if (a > b) {
            std::cout << "Результат действия: " << a << "\n";
        }
        else {
            std::cout << "Результат действия: " << b << "\n";
        }
    }
    else if (operation == 'n') {
        if (a < b) {
            std::cout << "Результат действия: " << a << "\n";
        }
        else {
            std::cout << "Результат действия: " << b << "\n";
        }
    }
    else {
        std::cout << "Операция не существует\n";
    }

    return 0;
}

