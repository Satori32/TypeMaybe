#include <iostream>
#include <string>

#include "Maybe.h"
int main() {
	Maybe<std::string> M = { "sutefan","satou","ahou","dekisugi","takahasi","tanaka","suzuki","narukami" };

	std::cout << M() << std::endl;
	std::cout << M() << std::endl;
	M.Reroll();
	std::cout << M() << std::endl;
	std::cout << M() << std::endl;
	std::cout << M.Get() << std::endl;	
	return 0;
}
/** /
int main() {
	Maybe<int> M = { 0,1,2,3,4,5 };

	std::cout << M() << std::endl;
	std::cout << M() << std::endl;
	M.Reroll();
	std::cout << M() << std::endl;
	std::cout << M() << std::endl;
	std::cout << M.Get() << std::endl;	
	return 0;
}
/**/