// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int num,i=0;
    char liter;
    bool orientation;
    cout << "Enter volume signs";
    cin >> num;
    cout << "Enter signs";
    cin >> liter;
    cout << "Enter the orientation 0 if horizontal 1 if vertical";
    cin >> orientation;
    
    if (orientation != 1)
    {
        while (i<num)
        {
            cout << liter;
                i++;
        }
        orientation = 1;
    }
    else if (orientation != 0)
    {
        while (i < num)
        {
            cout << liter <<'\n' ;
            i++;
        }
        orientation = 0;
    }



 
}