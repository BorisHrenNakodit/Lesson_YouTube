
#include <iostream>
using namespace std;


template <typename T>
class SmartPointr
{
public:
    SmartPointr(T* ptr)
    {
        this->ptr = ptr;
        cout << "Constructor" << endl;
    }

    T& operator*()
    {
        return *ptr;
    }





    ~SmartPointr()
    {
        delete ptr;
        cout << "Destructor" << endl;
    }
    private:

        T* ptr;
};

int main()
{
    SmartPointr<int> pointer = new int(5);

    cout << *pointer<< endl; 

    *pointer = 1234;

    cout << *pointer << endl;
    
   
    
    

           return 0;
}
