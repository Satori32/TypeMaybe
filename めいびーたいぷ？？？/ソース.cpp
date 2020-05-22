#include <iostream>

#include "Maybe.h"

int main() {
	Maybe<int> M = { 0,1,2,3,4,5 };

	std::cout << M() << std::endl;
	std::cout << M() << std::endl;
	
	return 0;
}