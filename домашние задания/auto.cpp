
#include <iostream>
//#include <chrono>
//#include <random>

int main() 
{
    setlocale(LC_ALL, "ru");
                                                //просто пробовала и такой вариант с рандомом
   // std::mt19937 gen(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));
   //std::uniform_int_distribution<int> dist(5, 20);

    const int arr_size = 10;
    int arr[10] = { 10,20,15,20,16,20,13,7,8,21 };
    
    //int arr[arr_size];
    /*for (int i = 0; i < arr_size; i++) {
        arr[i] = dist(gen);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;*/

                                                 //задаем переменные, где indexMax сохраняем номер дорогого авто, lastIndexMax сохраняет номер последнего
    int max = arr[0];
    int indexMax = 0;
    int lastIndexMax = 0;

    for (int i = 1; i < arr_size; i++) {
                                                //сразу записываем номер последнего в первом условии, для дальнейшего сравнения
       if (arr[i] > max) {
          max = arr[i];
          indexMax = i;
          lastIndexMax = i;
          }                                     //когда программа находит совпадение индекс последнего переписывается
       else if(arr[i] == max) {
           lastIndexMax = i;
       }
    }
    if (lastIndexMax == indexMax) {             //делаем сравнение индексов если совпадают, значит у нас только один дорогой автомобиль
        std::cout << "Самый дорогой автомобиль под номером: " << indexMax << " . По цене: " << max << std::endl;
    }
    else {
        std::cout << "Первый дорогой автомобиль под номером: " << indexMax << " . По цене: " << max << std::endl;
        std::cout << "Последний дорогой автомобиль под номером: " << lastIndexMax << " . По цене: " << max << std::endl;
    }
    
    return 0;    
}
