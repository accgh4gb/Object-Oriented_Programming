#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main()
{
	std::vector<int> v = {1,1,1,1,1,3,33,3,3,3,3,3,5,5,536,5,5,2,2,2,2,2,4,8,9,9,9,9,9,5,22,2,2};
	
	std::set<int> s(v.begin(), v.end());//поместить все элементы из вектора в словарь эффективно.
										//Не требуется предварительно сортировать
										//содержимое вектора. Асимптотика O(N)

	std::cout << s.size() << std::endl;

	return 0;
}

