#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here
TEST_CASE("shiftChar function tests:") {
	CHECK(shiftChar('0', 6) == '0');
	CHECK(shiftChar('z', 1) == 'a');
	CHECK(shiftChar('Z', 9) == 'I');
}//end shiftChar test cases

TEST_CASE("encryptCaesar function tests") {
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("defend the east wall of the castle!", 1) == "efgfoe uif fbtu xbmm pg uif dbtumf!");
}//end condition