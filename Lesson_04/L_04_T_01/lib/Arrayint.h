#ifndef ARRAYINT_H
#define ARRAYINT_H
#include <iostream>
#include <algorithm>
#include <cassert> // для assert()
#include <ostream>

class ArrayInt
{
private:
	int m_length;
	int *m_data;

public:
	ArrayInt(): m_length(0), m_data(nullptr) {}
	ArrayInt(int length):
	m_length(length)
	{
		assert(length >= 0);
		if (length > 0)
		{
			m_data = new int[length];
		}
		else
		{
			m_data = nullptr;
		}
	}
	void erase();	
	int getLength() const;
	void resize(int newLength);
	int& operator[](int index);
	void insertBefore(int value, int index);
	void push_back(int value);
	void pop_back();
	void pop_front();
	void mySort();
	friend std::ostream& operator<<(std::ostream& l, ArrayInt& A);

	~ArrayInt()
	{
		delete[] m_data;
	}
};

#endif
