// Lesson 38_MY(the smallest_work).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void smalles(int* a, int* b);



int main()
{
    int a = 5;
    int b = 7;

    int arr[]{ 1, 22, 6, 8 };


    cout << "a=\t" << a << '\n' << "b=\t" << b << '\n';
    // ИМЯ МАССИВА И ЕСТЬ ССЛЫКА НА ЕГО ПЕРВЫЙ   ЭЛЕМЕНТ
    cout << *(arr + 2) << '\n';




    smalles(&a, &b);
   
    cout <<"a=\t"<< a <<'\n' << "b=\t" << b;
}



void smalles(int* a, int* b)
{
    int i = *a;
    a = b;
    b = &i;


}

