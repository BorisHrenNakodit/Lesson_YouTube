// Lesson 124 ENUM.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



class PC
{
public:
	enum PCState
	{
		OFF,
		On,
		Sleep
	};
	PCState GetState() { return State; }

	void SetState(PCState State)
	{
		this->State = State;
	}
private:
	PCState State;
};


enum Speed {
	MIN=150,
	RECOMEND=600,
	MAX=800
};

int main()
{

	PC pc;
	pc.SetState(PC::PCState::On);


		//if (pc.GetState()==PCState::On)
		//{
		//	cout << "PC ON" << endl;
		//}


	Speed sp = Speed::MAX;
	cout << sp << endl;




	switch (pc.GetState())
	{

	case PC::PCState::OFF:
		cout << "PC OFF" << endl;
			break;

	case PC::PCState::On:
		cout << "PC ON" << endl;

		break;
	case PC::PCState::Sleep:
		cout << "PC Sleep" << endl;
		break;
	}
}