// Lesson STL 5 forward list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <forward_list>



int main()
{
    std::forward_list<int>f1{ 131,94,494 };
    
   

    std::forward_list<int>::iterator it = f1.begin();
    /*++it;*/
    /* --it*/ //не работает
    
    //f1.insert_after(it, 9999);
    f1.erase_after(it);

    f1.before_begin();
    f1.insert_after(it, 9999);
       

    //std::cout << *it << std::endl;
    
    
       for (auto i : f1)
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

}

