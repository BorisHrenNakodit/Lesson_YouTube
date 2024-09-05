// Lesson 127 inheritance_type_class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;

    }


private:
    int x;
    int y;
    int z;
};


template <typename T1>
class TypeSize
{
public:

    TypeSize(T1 value)
    {
        this->value= value;
    }

    void DataTypeSize()
    {
        cout << "value1= " << sizeof(value) << endl;

    }
    
protected:
    T1 value;
};

template<class T>
class TypeInfo :public TypeSize<T>
{
public:
 
    TypeInfo(T value) :TypeSize<T>(value)
    {

    }

    void ShowTypeName() 
    {
        cout << "Name type= " << typeid(this->value).name()<<endl;
    }


};




int main()
{
    Point a;

    
    TypeInfo<Point> c(a);
    c.DataTypeSize();
    c.ShowTypeName();
    


    
    return 0;
}