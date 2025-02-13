#include "easyfind.hpp"
#include <vector>

int main(){
	std::vector<int> arr;
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);

	try{
		easyfind(arr, 15);
	}
	catch(const std::exception &e){
		std::cerr << "Error: "<<  e.what() << std::endl;
	}
	return 0;
}