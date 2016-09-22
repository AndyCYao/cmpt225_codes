all: lab2
	
lab2: lab2.o basic_int_stack.o
	g++ -o lab2 basic_int_stack.o lab2.o

basic_int_stack.o: basic_int_stack.cpp
	g++ -c basic_int_stack.cpp

lab2.o: lab2.cpp
	g++ -c lab2.cpp

clean:
	rm *o lab2