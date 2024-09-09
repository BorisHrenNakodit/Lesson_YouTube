// Lesson 133  List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


template <typename T>
class List
{
public:
	List();
	~List();


	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() { return Size; }
	T& operator[](const int index);

private:	
	template <typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data=T(), Node* pNext=nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node <T>* head;	
};

template <typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else 
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		this->pop_front();
	}
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current!=nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}




int main()
{
	List<int> lst;

	lst.push_back(15);
	lst.push_back(25);
	lst.push_back(35);
	lst.push_back(45);
	lst.push_back(55);


	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}

	std::cout << "coul element= " << lst.GetSize() << "  complite pop_front" << std::endl;

	lst.pop_front();

	for (int i = 0; i < lst.GetSize(); i++)
	{
		std::cout << lst[i] << std::endl;
	}

	std::cout << "coul element= " << lst.GetSize() << "  complite clear" << std::endl;
	lst.clear();
	std::cout << "coul element= " << lst.GetSize() << std::endl;
	return 0;
}


