#include <iostream>
#include "Stacks.h"

StackList::StackList()
{
  head = nullptr;
}

StackList::~StackList()
{
  delete head;
}

void StackList::push(std::string s)
{
  Node *tmp = new Node(s);
  tmp->setNext(head);
  head = tmp;
}

std::string StackList::pop()
{
  if (head == nullptr)
  {
    throw STACK_ERR_EMPTY;
  }
  head = head->getNext();
  return head->getData();
}

std::string StackList::top() // return top item
{
  return head->getData();
}

bool StackList::is_empty()
{
  return head == nullptr;
}

std::string StackList::toString() // helper function for testing
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