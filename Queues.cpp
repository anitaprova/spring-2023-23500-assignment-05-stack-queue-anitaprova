#include <iostream>
#include "Queues.h"

Queue::Queue()
{
	head = nullptr;
	capacity = 0;
}

Queue::~Queue()
{
	delete head;
	delete tail;
}

void Queue::enqueue(std::string i)
{
	if (capacity == 1)
	{
		tail = head;
	}

	Node *tmp = new Node(i);
	tmp->setNext(head);
	head = tmp;
	capacity++;
}

std::string Queue::dequeue()
{
	tail = tail->getNext();
	return tail->getData();
}

std::string Queue::front()
{
	return tail->getData();
}

bool Queue::is_empty()
{
	return false;
}

bool Queue::is_full()
{
	return false;
}

std::string Queue::toString()
{
	Node *tmp = this->head;
	std::string result = "";
	result = result + "head-->";
	while (tmp != nullptr)
	{
		result = result + tmp->getData();
		result = result + "-->";
		tmp = tmp->getNext();
	}
	result = result + "nullptr";
	return result;
}