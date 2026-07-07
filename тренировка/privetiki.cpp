

#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    unsigned int minutes = 0;
    unsigned int hours = 0;
    unsigned int days = 0;
    unsigned int totalSeconds = 0;

    const int secondInMinutes = 60;
    const int secondInHours = 60 * 60;
    const int secondInDays = 60 * 60 * 24;
   

    std::cout << "Введите дни: ";
        std::cin >> days;

        std::cout << "Введите часы: ";
            std::cin >> hours;

            std::cout << "Ведите минуты: ";
                    std::cin >> minutes;

                    

    minutes = minutes * 60;
    hours = secondInHours * hours;
    days = secondInDays * days;
    totalSeconds = minutes + hours + days;

          std::cout << "Общее количество секунд: " << totalSeconds << std::endl;

      return 0;

}
