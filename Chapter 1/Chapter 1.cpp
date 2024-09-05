// this is called a preprocessor directive
#include <iostream>

int main()
{
	// cout means character output
	// "<<" operator allows us to display info to the console
	std::cout << "Hesllo world!";

	// Comments in C and C++ are the same, where "//" is used to comment out a line
	// and "/*" and "*/" are used to comment out multiple lines

	// An object is an area of storage in RAM that can hold a value
	// Objects, when named (has an identifier), are called variables
	// This statement below, is called a "definition"
	// it's a special kind of declaration statement that creates a new variable
	int x; // define a variable named x, of type int


	/*
		int a;
		int b;
	*/
	int a, b; // this is the same as the two lines above


	/*
		int a, double b; // wrong (compiler error)

		int a; double b; // correct (but not recommended)

		// correct and recommended (easier to read)
		int a;
		double b;
	*/



	return 0;
}