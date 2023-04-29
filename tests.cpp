#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Stacks.h"
#include "Queues.h"

TEST_CASE("constructor")
{
	StackList *s = new StackList();
	CHECK(s->gethead() == nullptr);

	Queue *q = new Queue();
	CHECK(q->getHead() == 0);
	CHECK(q->getTail() == 0);
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
	s->push("B");
	s->push("C");
	CHECK(s->toString() == "head-->C-->B-->A-->nullptr");

	Queue *q = new Queue();
	q->enqueue("A");
	CHECK(q->front() == "A");
	q->enqueue("B");
	CHECK(q->front() == "A");
	q->enqueue("C");
	CHECK(q->front() == "A");
	CHECK(q->toString() == "A B C ");
}

TEST_CASE("pop and dequeue")
{
	StackList *s = new StackList();
	s->push("A");
	s->push("B");
	s->push("C");
	CHECK(s->pop() == "B");
	CHECK(s->toString() == "head-->B-->A-->nullptr");
	CHECK(s->pop() == "A");
	CHECK(s->toString() == "head-->A-->nullptr");

	Queue *q = new Queue();
	q->enqueue("A");
	q->enqueue("B");
	q->enqueue("C");
	CHECK(q->dequeue() == "B");
	CHECK(q->dequeue() == "C");
	CHECK(q->toString() == "C ");
	CHECK(q->dequeue() == "");
}

TEST_CASE("top and front"){
	StackList *s = new StackList();
	s->push("A");
	s->push("B");
	s->push("C");
	CHECK(s->top() == "C");
	s->pop();
	CHECK(s->top() == "B");

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

	q->enqueue("first");
	q->enqueue("second");
	q->enqueue("third");
	q->enqueue("fourth");
	q->enqueue("fifth");
	CHECK(q->is_empty() == false);
	CHECK(q->is_full() == true);

	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->dequeue();
	CHECK(q->is_empty() == true);
	CHECK(q->is_full() == false);
}
