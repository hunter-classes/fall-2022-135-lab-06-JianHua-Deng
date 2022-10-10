#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here

TEST_CASE("caesar.cpp") {
	CHECK(shiftChar('0', 6) == '0');
	CHECK(shiftChar('z', 1) == 'a');
	CHECK(shiftChar('Z', 9) == 'I');
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("defend the east wall of the castle!", 1) == "efgfoe uif fbtu xbmm pg uif dbtumf!");
}//end condition

TEST_CASE("vigenere.cpp"){
	CHECK(returnAlphabetical('z') == 25);
	CHECK(returnAlphabetical('c') == 2);
	CHECK(shiftCharVigenere('A', 5) == 'F');
	CHECK(shiftCharVigenere('z', 7) == 'g');
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("Considerate", "Persona") == "Rsekwqegekw");
	CHECK(encryptVigenere("FUNNY, But we are going to attack at dawn!!!!", "strike") == "XNEVI, Fmm nm kvw zfqxk lh rbdeud rb neog!!!!");
}//end of test cases