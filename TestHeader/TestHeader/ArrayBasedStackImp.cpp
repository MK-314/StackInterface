
#include "StackInterface.h"
#include "ArrayBasedStack.h"
using namespace std;

template <typename T>
ArrayBasedStack<T>::ArrayBasedStack<T>() {
    top = -1;
    T arr[10];
}

template <typename T>
void ArrayBasedStack<T>::push(T newEntry) {
    top++;
    arr[top] = newEntry;
}


template <typename T>
T ArrayBasedStack<T>::peek() {
    int tmp = arr[top];
    return tmp;
}


template <typename T>
T ArrayBasedStack<T>::pop() {
    int tmp = arr[top];
    top--;
    return tmp;
}


template <typename T>
bool ArrayBasedStack<T>::isEmpty() {
    return top == 0;
}


template <typename T>
void ArrayBasedStack<T>::clear() {
    top = 0;
}