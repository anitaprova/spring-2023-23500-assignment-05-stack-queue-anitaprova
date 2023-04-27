#include <iostream>
#include <unistd.h>
#include "Node.h"
#include "Stacks.h"

int main()
{
	// Part 1 Stacks
	StackList *s = new StackList;
	s->push("1");
	s->push("2");
	s->push("3");
	std::cout << s->is_empty() << "\n";
	std::cout << s->toString() << "\n";
	s->pop();
	std::cout << s->toString() << "\n";
	std::cout << s->top() << "\n";

	StackList *empty = new StackList;
	std::cout << empty->is_empty() << "\n";
	std::string str = "";
	try
	{
		str = s->pop();
		std::cout << str << " " << s->top() << "\n";
	}
	catch (int e)
	{
		std::cout << "stack empty error code: " << e << "\n";
	}

	// Part 2

	return 0;
}
