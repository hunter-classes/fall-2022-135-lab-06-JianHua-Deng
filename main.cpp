#include <iostream>
#include "funcs.h"
#include "caesar.h"

int main()
{
	std::cout << shiftChar('z', 1) << std::endl;
	std::cout << encryptCaesar("I am the besty BEST!!!", 3) << std::endl;
	return 0;
}
