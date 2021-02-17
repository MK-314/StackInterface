
#include "StackInterface.h"
#include "ArrayBasedStack.h"

ArrayBasedStack::ArrayBasedStack() {
    top = -1;
    int arr[10];
}

void ArrayBasedStack::push(int newEntry) {
    top++;
    arr[top] = newEntry;
}


int ArrayBasedStack::peek() {
    int tmp = arr[top];
    return tmp;
}


int ArrayBasedStack::pop() {
    int tmp = arr[top];
    top--;
    return tmp;
}


bool ArrayBasedStack::isEmpty() {
    return top == 0;
}


void ArrayBasedStack::clear() {
    top = 0;
}