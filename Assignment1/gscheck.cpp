/*
Andy Yao
301064847
CMPT 225 Assignment 1
Sept 21st 2016
*/

#include "char_stack.h"

//topics of reading redirected file at here. 
//http://stackoverflow.com/questions/13559462/using-input-redirection-how-to-read-file-and-get-character-string-in-c
#include <iostream>

int main(int argc, char * argv[]){
	char* line[250];
	char c;
	char_stack S;

	std::cout << "Begin of the program \n";
	
	while(std::getline(std::cin, line)){
	//while (std::cin.get(c)){
		std::cout << "Entered '" << c << "'" << std::endl;
		/*
		if (c is an opening symbol){
			S.push(c)
		}
		else if (c is a closing symbol){
			if (S.empty()){
				std::cout << error "Too many c";
			}
			l = S.pop()

			if(l does not match c){
				std::cout << error - "Read c, expected r";
			}
		}
		*/
	}

	if (!S.empty()){
		c = S.pop();
		//std::cout << error "Too many c";
	}
	std::cout <<"No Errors Found";
	return 0;
}
