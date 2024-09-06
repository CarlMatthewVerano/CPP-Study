#include <iostream>

int main()
{
	// "<<" can be used multiple times to concatenate
	// multiple pieces of output
	std::cout << "Hello" << " world!" << std::endl;
	int x{ 5 };
	std::cout << "x is equal to: " << x << std::endl;

	// To output a newline, use std::endl since this ex
	// does not output on a different line:
	std::cout << "Hi!";
	std::cout << "My name is Alex.";

	// should be:
	std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
	std::cout << "My name is Alex." << std::endl;

	// std::cout is buffered, meaning it waits to output
	// and periodically, the buffer is flushed meaning
	// data collected is sent to the output stream.
	// This means that when the program crashes, any
	// buffered data is lost and will not be output.


	// std::endl flushes the buffer immediately
	// which is inefficient since having multiple of these
	// means the buffer is flushed multiple times thus unnecessary.

	// More efficient to let C++ flush automatically.

	// thus use "\n" instead
	int x1{ 5 };
	std::cout << "x is equal to: " << x1 << '\n'; // single quoted (by itself) (conventional)
	std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
	std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)

	// std::cin is used to get input from the user

	std::cout << "Enter a number: "; // ask user for a number

	int x2{};       // define variable x to hold user input (and value-initialize it)
	std::cin >> x2; // get number from keyboard and store it in variable x

	std::cout << "You entered " << x2 << '\n';

	// you can get two inputs in one line:
	std::cout << "Enter two numbers separated by a space: ";

	int x3{}; // define variable x to hold user input (and value-initialize it)
	int y{}; // define variable y to hold user input (and value-initialize it)
	std::cin >> x3 >> y; // get two numbers and store in variable x and y respectively

	std::cout << "You entered " << x3 << " and " << y << '\n';

	// std::cin is buffered
	// same as C, when pressing enter adds a '\n' character
	// in the example below, when you input "4 5", the 4 is
	// stored in x4 and the program will not wait
	// for the user to input y1, instead it will store 5 in y1
	// immediately. This is similar to the code prior, despite having two
	// separate std::cin statements. Thus makes std::cin buffered since
	// it allows us to perform multiple "extraction" requests.
	std::cout << "Enter two numbers: ";

	int x4{};
	std::cin >> x4;

	int y1{};
	std::cin >> y1;

	std::cout << "You entered " << x4 << " and " << y1 << '\n';

	// In C++, leading whitespaces, spaces, tabs, newlines, anything at the front of the buffer
	// are ignored when using std::cin. This is useful when you want to ignore leading whitespaces.
	// If you input something invalid however, you must handle it through the program.
	// Entering something invalid automatically assigns the value 0 to the var


	// Short Program
	int m{};
	int n{};
	int o{};
	std::cout << "Enter three numbers: ";
	std::cin >> m >> n >> o;
	std::cout << "You entered: " << m << ", " << n << ", and " << o << '\n';





	return 0;
}