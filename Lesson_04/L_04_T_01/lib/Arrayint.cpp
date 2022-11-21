#include "Arrayint.h"
#include <ostream>

//Hапишем функцию erase(), которая
//будет выполнять очитку массива и сбрасывать его длину
//на 0 (аналог функции clear() в векторах) и функцию
//для возврата длины массива (аналог size()):
 
void ArrayInt::erase()
{   
	delete[] m_data;// Здесь нам нужно указать
                    // m_data значение nullptr,
                    // чтобы на выходе не было висячего указателя
	m_data = nullptr;
    m_length = 0;
}
 
int ArrayInt::getLength() const { return m_length; }

int& ArrayInt::operator[](int index)
{   
	assert(index >= 0 && index < m_length);
    return m_data[index];
}
 
//Функция resize изменяет размер массива.
//Все существующие элементы сохраняются.
//Процесс медленный

void ArrayInt::resize(int newLength)
{   
// Если массив уже нужной длины — return
	if (newLength == m_length)
    {
	    return;
	}
    // Если нужно сделать массив пустым — делаем это и затем return
    if (newLength <= 0)
    {   
	    erase();
        return;
    }
       
    // Теперь знаем, что newLength >0
    // Выделяем новый массив
       
    int *data = new int[newLength];
	
	// Затем нужно разобраться с количеством
    // копируемых элементов в новый массив
    // Нужно скопировать столько элементов,
    // сколько их есть в меньшем из массивов
    
    if (m_length > 0)
    {
	    int elementsToCopy = (newLength > m_length) ? m_length : newLength;
        // Поочередно копируем элементы
        for (int index = 0; index < elementsToCopy ; ++index)
        {
	        data[index] = m_data[index];
        }
    }
 
    delete[] m_data;// Удаляем старый массив, так как
                    // он нам уже не нужен и используем вместо
                    // старого массива новый!
                    // Обратите внимание, m_data указывает
                    // на тот же адрес, на который указывает
                    // наш новый динамически выделенный массив.
                    // Поскольку данные были динамически
                    // выделенные — они не будут уничтожены,
                    // когда выйдут из области видимости
 
	m_data = data;
    m_length = newLength;
}
 
//Напишем функцию insertBefore() для добавления нового элемента в массив
//(в реализации эта функция очень похожа на resize()):
 
void ArrayInt::insertBefore(int value, int index)
{
	// Проверка корректности передаваемого индекса
	assert(index >= 0 && index <= m_length);
    // Создаем новый массив на один элемент больше старого массива
    int *data = new int[m_length+1];
    // Копируем все элементы до index-а
    for (int before = 0; before < index; ++before)
    {
	    data[before] = m_data[before];
    }
    // Вставляем новый элемент в новый массив
	data [index] = value;
    // Копируем все значения после вставляемого элемента
    for (int after = index; after < m_length; ++after)
    {
	    data[after+1] = m_data[after];
    }
    // Удаляем старый массив и используем вместо него новый
	delete[] m_data;
    m_data = data;
    ++m_length;
}
 
//Теперь легко реализовать аналог функции push_back() в векторах:
void ArrayInt::push_back(int value) { insertBefore(value, m_length); }

//удаление последнего элемента массива (аналог функции pop_back() в векторах)
void ArrayInt::pop_back()
{
	if (m_length == 0)
	{
		return;
	}
	resize(--m_length);
}

//удаление первого элемента массива (аналог pop_front() в векторах)
void ArrayInt::pop_front()
{
	if (m_length == 0)
	{
		return;
	}
    
	int newLength = m_length - 1;
	int *data = new int[newLength];
	
	if (newLength > 0)
    {
		// Поочередно копируем элементы
        for (int index = 0; index < newLength; ++index)
        {
		    data[index] = m_data[index + 1];
        }
    }

    delete[] m_data;
	m_data = data;
    m_length = newLength;

}

//сортировка массива
void ArrayInt::mySort()
{
	std::sort(&m_data[0], &m_data[m_length]);
}

std::ostream& operator<<(std::ostream& l, ArrayInt& A)
{
	int length = A.getLength();
	for (int i = 0; i < length; ++i)
	{
		l << A[i] << (((length == 1) || (length - 1 == i)) ? "" : " ");	
	}
	return l;
}

