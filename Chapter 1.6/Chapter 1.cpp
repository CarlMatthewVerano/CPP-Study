#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x << '\n';
    // in short; remember in C, the output is just garbage value


	// the code above is undefined behavior due to using an uninitialized variable

    /* Implementation-defined behavior and unspecified behavior */

    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
	// this is implementation-defined behavior because the number of bytes an int is dependent on the platform

	// best practice: just avoid both implementation-defined behavior and unspecified behavior

    return 0;
}