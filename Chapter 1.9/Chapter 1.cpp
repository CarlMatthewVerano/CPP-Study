#include <iostream>

int main()
{
	std::cout << 5 << '\n'; // print the value of a literal
	// prints value 5 and compile into the executable and used directly

	int x{ 5 };
	std::cout << x << '\n'; // print the value of a variable
	// compiler generates code that first copies the literal value 5
	// into the memory location reserved/given for the variable x

	// these examples demonstrate why literal values are constants unlike variables
	// since the literal value is directly placed into the exectuable and can no longer
	// be changed afterwards unlike a variable's value that can be changed during the runtime
	// of the executable.

	// operation is a process involving zero or more inputs (operands) and produces an output (result)
	// the specific operation is called an operator. outputs are usually called return values
	std::cout << 1 + 2 << '\n';

	// The number of operands that an operator takes as input is called the operator’s arity

	// example of arity: unary, binary, ternary, nullary

	// chaining is the idea that one operator can be used as an input for another operator
	// example: 1 + 2 * 3, the * operator is chained to the + operator where * is handled
	// first and then the + operator is handled which will utilize the result of the * operator

	// return values and side effects: most operators uses operands to return a value.
	// ex: x = 5; the = operator takes the value 5 and assigns it to the variable x which is
	// a side effect.

	return 0;
}