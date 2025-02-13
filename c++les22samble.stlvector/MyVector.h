#pragma once
#include <iostream>
using namespace std;

template<typename Type>
class Vector {
	Type* arr;
	int size;

public:
	Vector() {
		size = 0;
		arr = nullptr;
	}
	Vector(int size, Type value) {
		this->size = size;
		arr = new Type[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = value;
		}
	}
	~Vector() {
		if (size > 0) {
			delete[]arr;
			arr = nullptr;
			size = 0;
		}
	}

	int getSize() const {
		return size;
	}	
	// повертає розмірність масиву	
	void print()const {
		if (size==0)
		{
			cout << "Array is empty\n";
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}cout << endl;
		}
	}
	// виведення всіх елементів масиву

	void push_back(Type item) {
		//1
		Type* tmp = new Type[size + 1];
		//2
		for (int i = 0; i < size; i++)
		{
			tmp[i] = arr[i];
		}
		//3
		tmp[size] = item;
		//4
		if (arr != nullptr) delete[] arr;
		//5
		arr = tmp;
		//6
		size++;
	}
	// додавання елемента item у кінець масиву
	Type& operator[](int number) {
		return arr[number];
	}

	Type find_max()const {
		return arr[0];
	}
	// пошук елемента з максимальним значенням
	Type find_min()const {
		return arr[0];
	}
	// пошук елемента з мінімальним значенням

};
