#include <random>
#include <iostream>
#include <chrono>

int main() {
    setlocale(LC_ALL, "ru");
    
    std::mt19937 gen(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));
    std::uniform_int_distribution<int> dist(1, 100);
   
    unsigned const secret = dist(gen);
    
    int user_input = 0;
    int i = 0;

    std::cout << "Угадайте число, которое загадал компьютер!\n";
    do {
        i++;
        std::cout << "Ваш выбор: "; std::cin >> user_input;
        if (user_input > secret)
            std::cout << "Попытка " << i << ": Загаданное число меньше!Попробуйте ещё!\n";
        else if (user_input < secret)
            std::cout << "Попытка " << i << ": Загаданное число больше! Попробуйте ещё!\n";
        else
            std::cout << "Поздравляем, Вы угадали число! C " << i << " попытки\n";
    } while (user_input != secret);
    
    return 0;
}
