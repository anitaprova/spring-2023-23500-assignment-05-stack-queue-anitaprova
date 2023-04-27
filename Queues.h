#pragma once
#include <string>
#include "Node.h"

class Queue
{
private:
	Node *head;
	Node *tail;
	int a[5];
	int capacity;

public:
	Queue();
	~Queue();
	void enqueue(std::string i);
	std::string dequeue();
	std::string front();
	bool is_empty();
	bool is_full();
	std::string toString();
};
