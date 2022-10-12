#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
//Task B
TEST_CASE("caesar.cpp") {
	CHECK(shiftChar('0', 6) == '0');
	CHECK(shiftChar('z', 1) == 'a');
	CHECK(shiftChar('Z', 9) == 'I');
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("defend the east wall of the castle!", 1) == "efgfoe uif fbtu xbmm pg uif dbtumf!");
}//end condition
//Task C
TEST_CASE("vigenere.cpp"){
	CHECK(returnAlphabetical('z') == 25);
	CHECK(returnAlphabetical('c') == 2);
	CHECK(shiftCharVigenere('A', 5) == 'F');
	CHECK(shiftCharVigenere('z', 7) == 'g');
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("Considerate", "Persona") == "Rsekwqegekw");
	CHECK(encryptVigenere("FUNNY, But we are going to attack at dawn!!!!", "strike") == "XNEVI, Fmm nm kvw zfqxk lh rbdeud rb neog!!!!");
}//end of test cases
//Task D
TEST_CASE("decrypt.cpp"){
	CHECK(decryptShiftChar('z', 5) == 'u');
	CHECK(decryptShiftChar('S', 7) == 'L');
	CHECK(decryptShiftChar('q', 0) == 'q');
	CHECK(decryptReturnAlphabetical('a') == 0);
	CHECK(decryptReturnAlphabetical('z') == 25);
	CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
	CHECK(decryptCaesar("Av il vy uva av il, Aoha pz aol xblzapvu", 7) == "To be or not to be, That is the question");
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
	CHECK(decryptVigenere("F ez hni Acmln oth tyb Szsme, tyb Jvfyx aea xus Resk, qlr Pkkiekmau grd kei Rbj.", "Xenogear") == "I am the Alpha and the Omega, the First and the Last, the Beginning and the End.");
}//end test cases