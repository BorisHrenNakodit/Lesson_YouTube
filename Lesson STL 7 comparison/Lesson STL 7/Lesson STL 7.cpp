// Lesson STL 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>

int main()
{    // сравнение 2-х контейнеров идет по элементно если они имеют перегруженный оператор
    std:: array<int, 4> arr = { 1,94,77,9 };
    std::array<int, 4> arr2 = { 1,94,77,9 };

    bool result = (arr == arr2); // сравнение идет по элементно 


    result = (arr== arr2);  // сравнение по занчениям (сумму значений)
    std::cout << result << std::endl;
}


