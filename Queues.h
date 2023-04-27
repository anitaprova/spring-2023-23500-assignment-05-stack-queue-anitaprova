#pragma once
#include <string>
#include "Node.h"

#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4

class Queue
{
private:
	Node *head;
	Node *tail;
	int a[5];

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
