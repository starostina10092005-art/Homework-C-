
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    double distance, fuelConsaption, fuelPrice, totalFuelConsaption, tripCost;
    double const discount = 0.95;

    std::cout << "\t\t\t\t\tКАЛЬКУЛЯТОР СТОИМОСТИ ПОЕЗДКИ\n";

    std::cout << "Введите расстояние (км): ";
    std::cin >> distance;
    if (distance <= 0) {
        std::cout << "ОШИБКА, введите другое расстояние"; return 0;
    }
        
    std::cout << "Введите расход (л/100км): ";
        std::cin >> fuelConsaption;
        if (fuelConsaption <= 0) {
            std::cout << "ОШИБКА, к сожалению такое невозможно"; return 0;
        }
        else if (fuelConsaption >= 50) {
            std::cout << "ОШИБКА, вы уверенны что это не танк?"; return 0;
        }
    std::cout << "Введите цену за литр (руб): ";
        std::cin >> fuelPrice;
        if (fuelPrice <= 0) {
            std::cout << "ОШИБКА, к сожалению такое невозможно"; return 0;
        }
        
    std::cout << "\t\t\t\t\t\tРАСЧЕТ СТОИМОСТИ\n";

    totalFuelConsaption = (distance * fuelConsaption) / 100;
    std::cout << "Расход топлива: " << totalFuelConsaption << std::endl;

    if (distance <= 500) {
        tripCost = totalFuelConsaption * fuelPrice;
        std::cout << "Стоимость поездки: " << tripCost << std::endl;
    }
    else {
        tripCost = totalFuelConsaption * fuelPrice * 0.95;
        std::cout << "Стоимость поездки(со скидкой 5%): " << tripCost << std::endl;
    }

    if (tripCost <= 10000) {
        std::cout << "Можно ехать!" << std::endl;
    }
    else {
        std::cout << "Дороговато, может на поезде?" << std::endl;
    }

}