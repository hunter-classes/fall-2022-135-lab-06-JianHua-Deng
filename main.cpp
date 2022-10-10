#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{
	std::cout << shiftChar('z', 1) << std::endl;
	std::cout << encryptCaesar("Ore Ga Sugoi!!", 3) << std::endl;
	std::cout << returnAlphabetical('z') << std::endl;
	std::cout << encryptVigenere("Hello, World!", "cake") << std::endl;//Jevpq, Wyvnd!
	std::cout << encryptVigenere("Hello, World!", "") << std::endl;
	return 0;
}
