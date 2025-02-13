#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
void easyfind(T &container, int value){
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		std::cout << value << " found" << std::endl;
	else
		throw std::out_of_range("not found");
}

#endif