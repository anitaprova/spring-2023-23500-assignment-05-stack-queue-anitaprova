#include <iostream>
#include "Queues.h"

Queue::Queue()
{
	head = 0;
	tail = 0;
}

void Queue::enqueue(std::string i) // first in first out
{
	if (this->is_full()) // doesnt add more when full
	{
		head = 0;
	}
	else
	{
		a[head] = i;
		head++;
	}

	if (head >= size) // checks to see if full
	{
		head = 0;
	}
}

std::string Queue::dequeue()
{
	if (this->is_full())
	{
		head = size;
	}

	if (tail < head) // if tail == head make tail = 0
	{
		for (int i = tail; i < head - 1; i++)
		{
			a[i] = a[i + 1]; // rewrites it
		}
		a[head - 1] = "";
		head = head - 1;
	}
	else
	{
		a[tail] = "";
	}

	return a[tail];
}

std::string Queue::front()
{
	return a[tail];
}

bool Queue::is_empty()
{
	if (tail == head && a[tail] == "")
	{
		return true;
	}
	return false;
}

bool Queue::is_full()
{
	if (head == tail && a[head] != "")
	{
		return true;
	}
	return false;
}

std::string Queue::toString()
{
	std::string result = "Printing: ";
	for (int i = tail; i < size; i++)
	{
		result = result + a[i] + " ";
	}

	return result;
}