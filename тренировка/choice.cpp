

#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int choice;
    double rectangleLenght, width, rectangleSquare, triangleBase, triangleHigh, triangleSquare, circleRadius, circleSquare;
    double const PI = 3.14159;

    std::cout << "Выберите фигуру (1 – прямоугольник, 2 – треугольник, 3 – круг): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Введите длинну: ";
        std::cin >> rectangleLenght;
        std::cout << "Введите ширину: ";
        std::cin >> width;
        rectangleSquare = rectangleLenght * width;
        std::cout << "Площадь прямоугольника: " << rectangleSquare << std::endl;
    }
    else if (choice == 2) {
        std::cout << "Введите основание: ";
        std::cin >> triangleBase;
        std::cout << "Введите высоту: ";
        std::cin >> triangleHigh;
        triangleSquare = (triangleBase * triangleHigh) / 2.0;
        std::cout << "Площадь треугольника: " << triangleSquare << std::endl;
    }
    else if (choice == 3) {
        std::cout << "Введите радиус: ";
        std::cin >> circleRadius;
        circleSquare = PI * circleRadius * circleRadius;
        std::cout << "Площадь круга: " << circleSquare << std::endl;
    }
    else {
        std::cout << "Неверный выбор" << std::endl;
    }

    return 0;
}

