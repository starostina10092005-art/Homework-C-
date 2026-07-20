#include <iostream>
#include <cmath>                                    

int main()
{
    setlocale(LC_ALL, "ru");

    double x0{ 0.0 }, y0{ 0.0 };
    double x{ 1.0 }, y{ 1.0 };

    double r1{ 1.0 }, r2{ 2.0 };
    double len{ 0.0 };

    while (!(x == 0 && y == 0)) {
        std::cout << "Введите координаты точки (для выхода напишите: 0 0): ";
        std::cin >> x >> y;

        if (x == 0 && y == 0) {
            std::cout << "Пока-пока" << std::endl;
            break;
        }

        len = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
        if (r1 < len && len < r2)
            std::cout << "Точка на кольце\n";
        else
            std::cout << "Точка не на кольце\n";
    } 

    return 0;
}