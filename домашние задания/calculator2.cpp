
#include <iostream>
#include <string>

//подключаю новую библиотеку, чтобы можно было вводить max и min и сохранять их в переменную operations
int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, result;

    //вот здесь
    std::string operation;


    std::cout << "Введите два числа(через пробел): ";
    std::cin >> a >> b;

    std::cout << "Введите арефметическое дейстрие(+, -, *, /, максимум = max, минимум = min): ";
    std::cin >> operation;


    //заменяем '' на "", потому что '' - для одного символа когда используем char, "" - для массива (целой строки с символами) используя string
    if (operation == "+") {
        result = a + b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == "-") {
        result = a - b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == "*") {
        result = a * b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == "/") {
        result = a / b;
        std::cout << "Результат действия: " << result << "\n";
    }
    else if (operation == "max") {
        if (a > b) {
            std::cout << "Результат действия: " << a << "\n";
        }
        else {
            std::cout << "Результат действия: " << b << "\n";
        }
    }
    else if (operation == "min") {
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
    
    //короче я не знаю, праивльно ли я все поняла, просто хотела сделать так чтобы пользователь мог вводить слово а не одну букву. Если что то не так поправьте меня, пожалуйста :)
}


