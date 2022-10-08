#include <iostream>
#include "caesar.h"
char shiftChar(char c, int rshift) {
	char result;
	if (!isalpha(c)) {
		return c;
	}
	else if (isupper(c)) {
		result = (c - 'A' + rshift) % 26 + 'A';
	}
	else {
		result = (c - 'a' + rshift) % 26 + 'a';
	}//end condition

	return result;
}//end shiftChar

std::string encryptCaesar(std::string plaintext, int rshift) {
	std::string result;
	for (int i = 0; i < plaintext.length(); i++) {
		result += shiftChar(plaintext[i], rshift);
	}//end for loop
	return result;
}//end encryptCaesar function



/*
	if ((c >= 'A') && (c <= 'Z') || (c >= 'a' && c <= 'z')) {

	}
	else {
		return c;
	}
*/