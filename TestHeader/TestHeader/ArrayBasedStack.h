#pragma once
#include "StackInterface.h"

class ArrayBasedStack : public StackInterface
{
    int top;
    int arr[10];
public:
    ArrayBasedStack();
    void push(int newEntry);
    int pop();
    int peek();
    bool isEmpty();
    void clear();
};