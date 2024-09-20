// Lesson STL 3  List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>


using namespace std;



template<typename T>
 void PrintList(const list<T> &lst){
    for (auto i = lst.cbegin(); i != lst.cend(); i++)
    {
        
        cout << *i << '\n';
    }
    cout << '\t';
}


int main()
{

    list<int> myList = { 15,64,979 };
    myList.push_back(5);
    myList.push_front(151);
    //list<int>::iterator it = myList.begin();
    auto it = myList.begin(); 

    myList.sort();  // Сортирует числа по возрастанию
    

    PrintList(myList);

    cout << "pop_front" << endl;

    myList.pop_front();

    PrintList(myList);


    //for (auto i = myList.begin(); i != myList.end(); i++)
    //{
    //    cout << *i << '\t';
    //}
    cout << endl;
}

