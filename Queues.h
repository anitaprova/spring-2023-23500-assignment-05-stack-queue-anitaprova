#pragma once
#include <string>

class Queue
{
private:
	int head;
	int tail;
	int size = 5;
	std::string a[5];

public:
	Queue();
	void enqueue(std::string i);
	std::string dequeue();
	std::string front();
	bool is_empty();
	bool is_full();
	std::string toString();
};
