// Lesson 13 task 2(calculatorswitch).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int number_first;
    int number_second;
    char action;

    cout << "Enter to numbers\n";
    cin >> number_first;
    cin >> number_second;

    cout << "Enter an action (+,-,%,/)\n";
    cin >> action;

    switch (action)
    {
        case '+':
        {
            cout << number_first + number_second << '\n';
        }            
        break;

        case '-':
        {
            cout << number_first - number_second << '\n';
        }
        break;

        case '%':
        {
            cout << number_first % number_second << '\n';
        }
        break;

        case '*':
        {
            cout << number_first * number_second << '\n';
        }
        break;

        case '/':
        {
            cout << (float)number_first / number_second << '\n';
        }
        break;

        default:
            cout << "ERROR" << "\n";
        break;
    }
}

