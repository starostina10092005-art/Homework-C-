
#include <iostream>

int main()
{

    setlocale(LC_ALL, "ru");

    double a, b, c, d, e;
    double weatherMiddle = 0.00;
    double weatherTotal = 0.00;

    std::cout << "Введите температуру на ближайшие 5 дней (через пробел): ";
    std::cin >> a >> b >> c >> d >> e;

   //максимальная температура
    if (a >= b && a >= c && a >= d && a >= e) {
        std::cout << "Максимальная температура: " << a << std::endl;
    }
    else if (b >= a && b >= c && b >= d && b >= e) {
        std::cout << "Максимальная температура: " << b << std::endl;
    }
    else if (c >= a && c >= b && c >= d && c >= e) {
        std::cout << "Максимальная температура: " << c << std::endl;
    }
    else if (d >= a && d >= b && d >= c && d >= e) {
        std::cout << "Максимальная температура: " << d << std::endl;
    }
    else {
        std::cout << "Максимальная температура: " << e << std::endl;
    }

    //минимальная температура
    if (a <= b && a <= c && a <= d && a <= e) {
        std::cout << "Минимальная температура: " << a << std::endl;
    }
    else if (b <= a && b <= c && b <= d && b <= e) {
        std::cout << "Минимальная температура: " << b << std::endl;
    }
    else if (c <= a && c <= b && c <= d && c <= e) {
        std::cout << "Минимальная температура: " << c << std::endl;
    }
    else if (d <= a && d <= b && d <= c && d <= e) {
        std::cout << "Минимальная температура: " << d << std::endl;
    }
    else {
        std::cout << "Минимальная температура: " << e << std::endl;
    }

    //средняя температура

    weatherMiddle = (double)(a + b + c + d + e) / 5.0;
        std::cout << "Средняя температура: " << weatherMiddle << std::endl;

    //сообщение

     if (weatherMiddle <= 0) {
        std::cout << "Холод собачий" << std::endl;
        }
     else if (weatherMiddle > 0 && weatherMiddle <= 10) {
        std::cout << "Ну чисто до магазина пройтись" << std::endl;
        }
     else if (weatherMiddle > 10 && weatherMiddle <= 20) {
        std::cout << "Ура, гуляем" << std::endl;
        }
     else if (weatherMiddle > 20 && weatherMiddle <= 30) {
        std::cout << "Можно идти купаться" << std::endl;
        }
     else {
        std::cout << "Мы попали в ад" << std::endl;
        }


    return 0;
}
