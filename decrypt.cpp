#include <iostream>
#include "decrypt.h"

char decryptShiftChar(char c, int rshift) {
	char result;
	if (!isalpha(c)) {
		return c;
	}
	else if (isupper(c)) {
		//modified this equation because when (c - 'A' - rshift) is a negative value, it wouldn't return correct result due to the nature of how modulu operates in c++
		result = (((c - 'A' - rshift) % 26) + 26) % 26 + 'A';
	}
	else if(islower(c)){
		//modified this equation because when (c - 'a' - rshift) is a negative value, it wouldn't return correct result due to the nature of how modulu operates in c++
		result = (((c - 'a' - rshift) % 26) + 26) % 26 + 'a';
	}//end condition

	return result;
}//end shiftChar

int decryptReturnAlphabetical(char c){

    if(isupper(c)){
        return (c - 'A') % 26;
    }else if(islower(c)){
        return (c - 'a') % 26;
    }//end of all condition
    return -1;
}//end of returnAlphabetical

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string result;
    for(int i = 0; i < ciphertext.length(); i++){
        result += decryptShiftChar(ciphertext[i], rshift);
    }//end of for loop
    return result;
}//end decryptCaesar function

std::string decryptVigenere(std::string ciphertext, std::string keyword){
	std::string result;
	int count = 0;
	for(int i = 0; i < ciphertext.length(); i++){
		result += decryptShiftChar(ciphertext[i], decryptReturnAlphabetical(keyword[count % keyword.length()]));
		if(isalpha(ciphertext[i])){
			count++;
		}//end condition
	}//end for loop
	return result;
}//end decryptVigenere function