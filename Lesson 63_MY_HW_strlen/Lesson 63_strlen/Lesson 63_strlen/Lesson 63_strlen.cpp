// Lesson 63_strlen.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int  strLen(const char* Char);





int main()
{

    const char* strArr[] = { "Hello","World","!",};


    for (int i = 0; i < 3; i++)
    {
        cout << strArr[i];
    }
    cout << '\n';

    const char *stri = "Hall";
    //cout << stri << '\n';
    //cout << strlen(stri);
    cout << stri << '\n'; 
     cout << strLen(stri);

}


int  strLen(const char* Char)
{
    int counter = 0;

    while (Char[counter] != '\0')
    {
        counter++;
    }
 

    return counter;
}