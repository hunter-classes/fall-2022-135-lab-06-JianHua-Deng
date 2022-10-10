#include <iostream>

int returnAlphabetical(char c){

    if(isupper(c)){
        return (c - 'A') % 26;
    }else if(islower(c)){
        return (c - 'a') % 26;
    }//end of all condition
    return -1;
}//end 

char shiftCharVigenere(char c, int rshift) {
	char result;
    if (isupper(c)) {
		result = (c - 'A' + rshift) % 26 + 'A';
	}
	else if(islower(c)) {
		result = (c - 'a' + rshift) % 26 + 'a';
	}//end condition

	return result;
}//end shiftChar

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string result;
    int count = 0;
    for(int i = 0; i < plaintext.length(); i++){
    if(!isalpha(plaintext[i])){
        result += plaintext[i];
    }else{
        result += shiftCharVigenere(plaintext[i], returnAlphabetical(keyword[count % keyword.length()]));
        count++;
    }//end else condition

    }//end of for loop

return result;
}//end encryptVigenere function