// Changing Places.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void Changing_Plaxes(int *pFirst_Num, int *pSecond_Num);


int main()
{
	int First_Num = 25;
	int Second_Num = 8;
	cout << First_Num << Second_Num << endl;

	Changing_Plaxes(&First_Num, &Second_Num);
	
	cout << First_Num << Second_Num << endl;
	return 0;
}

void Changing_Plaxes(int *pFirst_Num, int *pSecond_Num)
{
	int jumper = (*pFirst_Num) ;
	*pFirst_Num = *pSecond_Num;
	*pSecond_Num = jumper;
	
}
