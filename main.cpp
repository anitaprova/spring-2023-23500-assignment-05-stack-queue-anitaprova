#include <iostream>
#include <unistd.h>
#include "Node.h"
#include "Stacks.h"
#include "Queues.h"

int main()
{
	// Part 1 Stacks
	StackList *s = new StackList;
	s->push("1");
	s->push("2");
	s->push("3");
	std::cout << "top: " << s->top() << "\n";
	std::cout << "empty?: " << s->is_empty() << "\n";
	std::cout << s->toString() << "\n";
	std::cout << "pop: " << s->pop() << "\n";
	std::cout << "top: " << s->top() << "\n";
	std::cout << s->toString() << "\n";

	StackList *empty = new StackList;
	std::cout << empty->toString() << "\n";
	std::cout << "empty?: " << empty->is_empty() << "\n";

	try
	{
		std::cout << empty->top() << "\n";
	}
	catch (int e)
	{
		std::cout << "stack empty error code: " << e << "\n";
	}

	try
	{
		std::cout << empty->pop() << "\n";
	}
	catch (int e)
	{
		std::cout << "stack empty error code: " << e << "\n";
	}


	// Part 2
	std::cout << "\n\n\nPART 2\n";
	Queue *q = new Queue;
	std::cout << "empty: " << q->is_empty() << "\n";
	q->enqueue("1");
	q->enqueue("2");
	q->enqueue("3");
	q->enqueue("4");
	q->enqueue("5");
	q->enqueue("EXTRA");
	std::cout << "front: " << q->front() << "\n";
	std::cout << "empty: " << q->is_empty() << "\n";
	std::cout << "full: " << q->is_full() << "\n";

	std::cout << q->dequeue() << "\n";
	std::cout << q->dequeue() << "\n";
	std::cout << q->dequeue() << "\n";
	std::cout << q->dequeue() << "\n";
	std::cout << q->toString() << "\n";
	std::cout << "front: " << q->front() << "\n"; //should be empty because list is empty
	std::cout << "empty: " << q->is_empty() << "\n";
	
	return 0;
}
