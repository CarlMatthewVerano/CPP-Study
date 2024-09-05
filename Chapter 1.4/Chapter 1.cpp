// this is called a preprocessor directive
#include <iostream>

int main()
{
	/* Variable assignment */

	int width; // define an integer variable named width
	width = 5; // assigns value 5 into variable (also known as copy assignment)

	std::cout << width; // prints 5

	width = 7; // you can change variable values during runtime

	std::cout << width; // prints 7


	/* Variable initialization */

	int widthA{ 5 }; // another way to initialize a variable with a value

	std::cout << widthA;

	int a;         // no initializer (default initialization)
	int b = 5;     // initial value after equals sign (copy initialization; less preferred due to inefficiency)
	int c(6);    // initial value in parenthesis (direct initialization; can be confused with functions that's why less preferred)

	// List initialization methods (C++11) (preferred due to disallowing narrowing conversions)
	int d{ 7 };   // initial value in braces (direct list initialization)
	int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
	int f{};      // initializer is empty braces (value initialization)

	// Narrowing conversions are trying to initialize a variable with a value that cannot be safely held
	// For example, initializing an int var with a float/double value:

	// An integer can only hold non-fractional values
	// To reiterate, list initialization disallows narrowing conversions
	
	// int w1{ 4.5 }; // compile error: list init does not allow narrowing conversion of 4.5 to 4

	int w2 = 4.5;   // compiles: copy init initializes width with 4
	int w3(4.5);    // compiles: direct init initializes width with 4


	/* Variable initialization and zero initialization */

	int widthD{}; // value initialization / zero initialization to value 0

	// When to excplicitly initialize a variable to 0
	// When you want to use that value:
	int x{ 0 };    // explicit initialization to value 0
	std::cout << x; // we're using that zero value

	// If not explicit, this is the use case:
	int x1{};      // value initialization
	std::cin >> x1; // we're immediately replacing that value
	std::cout << x1;

	/* Initializing multiple variables */

	// int a1, b1; // declare two variables
	// While this is discouraged, this was discussed by the lesson
	// to show its common pitfalls
	int a11 = 5, b11 = 6;          // copy initialization
	int c1(7), d1(8);        // direct initialization
	int e1{ 9 }, f1{ 10 };     // direct brace initialization
	int g1 = { 9 }, h1 = { 10 }; // copy brace initialization
	int i1{}, j1{};            // value initialization

	// common pitfall:
	int a2, b2 = 5; // wrong (a is not initialized!)

	int a3 = 5, b3 = 5; // correct

	// best way to remember that the above is wrong is this example,
	// since this'll compile error:
	/*
		int a4, b4(5);
		int c4, d4{ 5 };
		std::cout << a4 << b4 << c4 << d4;
	*/

	// Unused variables will produce a warning, a way to avoid besides
	// using the variable is to indicate that it's unused:
	// Here's some math/physics values that we copy-pasted from elsewhere
	/* 
		double pi{ 3.14159 };
		double gravity{ 9.8 };
		double phi{ 1.61803 };

		std::cout << pi << '\n';
		std::cout << phi << '\n';

		// We're not using gravity in this program
		// The compiler will likely complain about gravity being defined but unused

	*/

	[[maybe_unused]] double pi{ 3.14159 };
	[[maybe_unused]] double gravity{ 9.8 };
	[[maybe_unused]] double phi{ 1.61803 };

	std::cout << pi << '\n';
	std::cout << phi << '\n';

	// The compiler will no longer warn about gravity not being used
	

	return 0;
}