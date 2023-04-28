#pragma once
#include "Node.h"

#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4

class StackList
{
private:
  Node *head;

public:
  StackList();
  ~StackList();
  void push(std::string i);
  std::string pop();
  std::string top();
  bool is_empty();
  Node *gethead();
  std::string toString();
};
