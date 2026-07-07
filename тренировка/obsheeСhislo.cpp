
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c ;
    double middle = 0.0;

    std::cout << "Введите 3 числа(через пробел): ";
    std::cin >> a >> b >> c;

    middle = double(a + b + c) / 3.0;

    std::cout << "Среднее арефметическое: " << middle << std::endl;

        return 0;
}
