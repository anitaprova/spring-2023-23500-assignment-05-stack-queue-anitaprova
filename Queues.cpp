#include <iostream>
#include "Queues.h"

Queue::Queue()
{
	head = nullptr;
	tail = nullptr;
}

Queue::~Queue()
{
	delete head;
	delete tail;
}

void Queue::enqueue(std::string i)
{
	Node *tmp = new Node(i);
	tmp->setNext(head);
	tail = tmp;
}

std::string Queue::dequeue()
{
}

std::string Queue::front()
{
	return tail->getData();
}

bool Queue::is_empty()
{
}

bool Queue::is_full()
{
}