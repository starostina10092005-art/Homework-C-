
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    double sm = 0.0;
    double inch = 0.0;
    int choise = 1;
    double const inchSm = 2.54;

    do {
        std::cout << "Выберите действие:\n1.Перевести дюймы в см\n2.Перевести см в дюймы\n3.Выход\nВаш выбор: ";
        std::cin >> choise;
        if (choise <= 0 || choise > 3) {
            std::cout << "Неверный выбор! Попробуйте снова.\n"; continue;
        }

        switch (choise) {
        case 1:
            std::cout << "Введите дюймы: ";
            std::cin >> inch;
            if (inch <= 0) {
                std::cout << "Неверный выбор\n"; continue;
            }
            sm = inch * inchSm;
            std::cout << "" << inch << " дюйм(а) это " << sm << " сантиметров" << std::endl;
            break;
        case 2:
            std::cout << "Введите сантиметры: ";
            std::cin >> sm;
            if (sm <= 0) {
                std::cout << "Неверный выбор\n"; continue;
            }
            inch = sm / inchSm;
            std::cout << "" << sm << " сантиметр(а) это " << inch << " дюйм(а)" << std::endl;
            break;
        case 3:
            std::cout << "Пока-пока!" << std::endl;
            break;
        }
    } while (choise != 3);

    return 0;
}
