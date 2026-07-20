
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int day = 0;
    int total_distance = 0;
    int distance = 15;

    std::cout << "Введите кол-во дней: ";
    std::cin >> day;
    if (day <= 0) {
        std::cout << "Неверное значение!" << std::endl;
        return 0;
    }

    for (int i = 1; i <= day; i++) {
        
        total_distance += distance;
        distance += 2;
    
    }

    std::cout << "Улитка проползла " << total_distance << " см за "
        << day << " дней" << std::endl;

    return 0;
}
