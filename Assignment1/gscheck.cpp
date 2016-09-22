/*
Andy Yao
301064847
CMPT 225 Assignment 1
Sept 21st 2016
*/

// #include "char_stack.h"

//topics of reading redirected file at here. 
//http://stackoverflow.com/questions/13559462/using-input-redirection-how-to-read-file-and-get-character-string-in-c
#include <iostream>

int main(int argc, char * argv[]){
	/*
	std::istream* input = &std::cin; // input is stdin by default
	if(argc > 1){	//file name was given
		input = new std::ifstream(argv[1]);
	}
	*/
	char c;
	std::cout << "Begin of the program \n";
	while (std::cin.get(c)){
		//if(std::getline(std::cin, line)){
		std::cout << "Entered '" << c << "'" << std::endl;
		//}
	}
	std::cout <<"End of the program";
	return 0;
}

/*
S = char_stack;

while ( there are still un-processed input characters ){
	c = next un-processed character
	if ( c is an opening symbol ){
		S.push( c )
	}
	else if ( c is a closing symbol ){
		if ( S is empty ){
			cout << error "Too many c";
		}
		l = S.pop()
		if ( l does not match c ){
			cout << error - "Read c, expected r" ;
                        // here, r is the closing symbol matching l
		}
	}
}
if ( S is not empty ){
        c = S.pop()
	cout << error "Too many c";
}
cout << "No Errors Found";
*/