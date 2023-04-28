#include <iostream>
#include "Queues.h"

Queue::Queue()
{
	head = 0;
	tail = 0;
	empty = false;
	full = false;
}

void Queue::enqueue(std::string i) // first in first out
{
	if (head >= size)
	{
		head = tail;
		full = true;
	}
	a[head] = i;
	head++;

	if (head == size)
	{
		full = true;
	}
}

std::string Queue::dequeue()
{
	if (tail >= head)
	{
		tail = 0;
		empty = true;
		return a[tail];
	}

	tail++;
	return a[tail];
}

std::string Queue::front()
{
	return a[tail];
}

bool Queue::is_empty()
{
	return empty;
}

bool Queue::is_full()
{
	return full;
}

std::string Queue::toString()
{
	std::string result = "";
	for (int i = tail; i < size; i++)
	{
		result = result + a[i] + " ";
	}

	return result;
}