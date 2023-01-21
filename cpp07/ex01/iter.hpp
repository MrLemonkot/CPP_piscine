#pragma once

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

template<typename T>
void outPut(const T &data) {
	cout << data << " ";
}

template <typename T>
void iter(T *array, unsigned int n, void (*f)(const T &data)) {
	unsigned int i = 0;

	if (array == NULL)
		return ;
	while (i < n)
	{
		f(array[i]);
		i++;
	}
}
