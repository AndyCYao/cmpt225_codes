/*
Andy Yao
301064847
CMPT 225 Assignment 1
Sept 21st 2016
-To Do List
	generate the correct error message
*/

#include "char_stack.h"

#include <iostream>


int main(int argc, char * argv[]){
	char line[250]; // 250 because spec sheet detailed max 250 char per line.
	char c;
	int c_count;
	char_stack S;

	std::cout << "Begin of the program \n";
	
	while(!std::cin.peek() == std::cin.eof()){
		std::cin.getline(line, 250);
		c_count = std::cin.gcount();

		std::cout<< c_count << std::endl;
		//loop through the line
		for(int x = 0; x < c_count; x++){
			c = line[x];
			//std::cout << c;
			
			if (c == '(' || 
				c == '{' || 
				c == '['){
				S.push(c);	
			}	
			else if(c == ')'){
				
				if(S.empty()){
					std::cout << "Error, too many " << c;
				}
				char l = S.pop();
				if(l != '('){
					std::cout << "error, read " << l <<
					" expected " << "(";
				}
			}	
			else if(c == '}'){
				
				if(S.empty()){
					std::cout << "Error, too many " << c;
				}
				char l = S.pop();
				if(l != '{'){
					std::cout << "error, read " << l <<
					" expected " << "{";
				}
			}
			else if(c == ']'){
				
				if(S.empty()){
					std::cout << "Error, too many " << c;
				}
				char l = S.pop();
				if(l != ']'){
					std::cout << "error, read " << l <<
					" expected " << "[";
				}
			}
			
		}
	}

	if (!S.empty()){
		c = S.pop();
		std::cout << "Error, Too many " << c;
	}
	std::cout <<"No Errors Found";
	return 0;
}




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