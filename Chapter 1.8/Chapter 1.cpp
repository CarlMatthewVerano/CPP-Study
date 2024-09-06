// If you have multiple preprocessor directives,
// must be in separate lines

#include <iostream>
#include <string>


int main()
{
	int x; // int and x must be whitespace separated

	//// valid but in my opinion, the last two aren't readable
	//int x;
	//int                y;
	//int
	//	z;


	//std::cout << "Hello world!"; // This is part of the comment and
	//this is not part of the comment

	//// quoted texts take the amount of whitespace literally
	//std::cout << "Hello world!";
	//std::cout << "Hello          world!"; // this will take all the whitespaces literally

	// whitespaces are used to format code in C++
	// C++ is known as a whitespace independent language
	// As an experienced programmer, just follow your own
	// best practices from other languages to keep things readable.
	// Though there are some cases where having freedom is important:

	// In this example, the string is very long, thus you could just move it to
	// the next line. Doesn't matter how you indent the other next-lined
	// strings, C++ automatically concatenates them.
	std::cout << "This is a really, really, really, really, really, really, really, "
		"really long line\n"; // one extra indentation for continuation line

	std::cout << "This is another really, really, really, really, really, really, really, "
		"really long line\n"; // text aligned with the previous line for continuation line

	std::cout << "This one is short\n";

	// another example that's readable:
	/*
		cost		  = 57;
		pricePerItem  = 24;
		value		  = 5;
		numberOfItems = 17;
	*/

	return 0;
}