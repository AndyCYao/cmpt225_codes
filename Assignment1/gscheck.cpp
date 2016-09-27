/*
Andy Yao
301064847
CMPT 225 Assignment 1
Sept 21st 2016

Need to decide if printErrorLine stays there, if ifError is necessary, and how to print the line errors.
*/

#include "char_stack.h"

#include <iostream>

/*
	Generate the line break message
*/
void printErrorLine(int x, int c_count, char line[250]){
	char start_line[x];
	char remaining[x];
	
	for(int z = 0; z < x; z++){
		start_line[z] = line[z];
		remaining[z] = ' ';
	}
	
	start_line[x] = '\0';

	for(int y = x; y < c_count; y++){
		remaining[y] = line[y];
	}

	std::cout << start_line <<  std::endl 
	  		  << remaining << std::endl;
}

char findCounterPart(char bracket){
	if (bracket == '}'){
		return '{';
	}
	else if (bracket == ')'){
		return '(';
	}
	else if (bracket == ']'){
		return '[';
	}
	else if (bracket == '{'){
		return '}';
	}
	else if (bracket == '('){
		return ')';
	}
	else if (bracket == '['){
		return ']';
	}
}

int main(int argc, char * argv[]){
	char line[250]; 	// 250 because spec sheet detailed max 250 char per line.
	char c;
	int l_count = 0;	// number of lines already read
	int c_count; 		// character count in a line
	char_stack S;

	bool isError;

	while(!std::cin.peek() == std::cin.eof()){
		std::cin.getline(line, 250);
		c_count = std::cin.gcount();
		l_count +=1;
		//std::cout<< c_count << std::endl << std::endl;
		//loop through the line
		for(int x = 0; x < c_count; x++){
			c = line[x];
			//std::cout << c << " stack size is " << S.size() << std::endl;
			
			if (c == '(' || 
				c == '{' || 
				c == '['){
				S.push(c);	
			}
			//testing
			else if(c == ')' ||
					c == '}' ||
					c == ']'){
				
				if(S.empty()){
					std::cout << "Error on line " << l_count << ": Too many " << c << std::endl;
					isError = true;
				}
				else{
					char l = S.pop();
					if(l != findCounterPart(c)){
						std::cout << "Error on line " << l_count << ": Read " << c <<
						", expected " << findCounterPart(l) << std::endl;
						isError = true;
					}
				}
			}	
			/*	
			else if(c == ')'){
				
				if(S.empty()){
					std::cout << "Error on line " << l_count << ": Too many " << c << std::endl;
					isError = true;
				}
				else{
					char l = S.pop();
					if(l != '('){
						std::cout << "Error on line " << l_count << ": Read " << c <<
						", expected " << "(" << std::endl;
						isError = true;
					}
				}
			}	
			else if(c == '}'){
				
				if(S.empty()){
					std::cout << "Error on line " << l_count << ": Too many " << c << std::endl;
					isError = true;
				}
				else{
					char l = S.pop();
					if(l != '{'){
						std::cout << "Error on line " << l_count << ": Read " << c <<
						", expected " << "{" << std::endl;
						isError = true;
					}
				}
			}
			else if(c == ']'){
				
				if(S.empty()){
					std::cout << "Error on line " << l_count << ": Too many " << c << std::endl;
					isError = true;
				}
				else{
					char l = S.pop();
					if(l != '['){
						std::cout << "Error on line " << l_count << ": Read " << c <<
						", expected " << "[" << std::endl;
						isError = true;
					}
				}
			}
			*/

			if (isError){
				/*
				char start_line[x];
				char remaining[x];
				
				for(int z = 0; z < x; z++){
					start_line[z] = line[z];
					remaining[z] = ' ';
				}
				
				start_line[x] = '\0'; 

				for(int y = x; y < c_count; y++){
					remaining[y] = line[y];
				}
				*/

				//std::cout << "Error on line "<< l_count << ": Read " << c << std::endl;
				printErrorLine(x, c_count ,line);
				return 0;
			}
			
		}
	}

	if (!S.empty()){
		c = S.pop();
		std::cout << "Error on line " << l_count << ": Too many " << c;
		//printErrorLine(x, c_count , line);
	}
	else{
		std::cout <<"No Errors Found" << std::endl;		
	}
	return 0;
}