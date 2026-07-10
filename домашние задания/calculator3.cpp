

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

    switch (operation)
        case '+': {
        result = a + b;
        std::cout << "Результат действия: " << result << "\n";
        break;
        case '-':
            result = a - b;
            std::cout << "Результат действия: " << result << "\n";
            break;
        case '*':
            result = a * b;
            std::cout << "Результат действия: " << result << "\n";
            break;
        case '/':
            result = a / b;
            std::cout << "Результат действия: " << result << "\n";
            break;
        case 'm':
            if (a > b) {
                std::cout << "Результат действия: " << a << "\n";
            }
            else {
                std::cout << "Результат действия: " << b << "\n";
            }
            break;
        case 'n':
            if (a < b) {
                std::cout << "Результат действия: " << a << "\n";
            }
            else {
                std::cout << "Результат действия: " << b << "\n";
            }
            break;
        default:
            std::cout << "Операция не существует\n";
            break;
    }
    return 0;
}

