#pragma once
#include "StackInterface.h"
using namespace std;

template <typename T>
class ArrayBasedStack : public StackInterface<T>
{
public:
    T top;
    T arr[10];
    ArrayBasedStack();
    void push(T newEntry);
    T pop();
    T peek();
    bool isEmpty();
    void clear();
};