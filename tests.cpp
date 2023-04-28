#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Stacks.h"
#include "Queues.h"

TEST_CASE("constructor")
{
	StackList *s = new StackList();
	CHECK(s->gethead() == nullptr);

	Queue *q = new Queue();

}

TEST_CASE("deconstructor")
{
	StackList *s = new StackList();
	s->push("0");
	s->push("1");
	delete s;		 // cannot reference this anymore
	s = nullptr; // already deleted so it is good practice to point to nullptr
	CHECK(s == nullptr);
}

TEST_CASE("push and enqueue")
{
	StackList *s = new StackList();
	s->push("A");
	s->push("A");
	s->push("A");
	CHECK(s->toString() == "head-->A-->A-->A-->nullptr");

	Queue *q = new Queue();
	q->enqueue("A");
	q->enqueue("B");
	q->enqueue("C");
	CHECK(q->front() == "A");
}

TEST_CASE("pop and dequeue")
{
	StackList *s = new StackList();
	s->push("A");
	s->push("B");
	s->push("C");
	CHECK(s->pop() == "B");

	Queue *q = new Queue();
	q->enqueue("A");
	q->enqueue("B");
	q->enqueue("C");
	CHECK(q->dequeue() == "B"); 
}

TEST_CASE("top and front"){
	StackList *s = new StackList();
	s->push("A");
	s->push("B");
	s->push("C");
	CHECK(s->top() == "C");

	Queue *q = new Queue();
	q->enqueue("A");
	q->enqueue("B");
	q->enqueue("C");
	CHECK(q->front() == "A");
	q->dequeue();
	CHECK(q->front() == "B");
}

TEST_CASE("is_empty and is_full"){
	StackList *s = new StackList();
	CHECK(s->is_empty() == 1);

	Queue *q = new Queue();
	CHECK(q->is_empty() == true);
	CHECK(q->is_full() == false);
}
