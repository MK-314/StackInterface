#pragma once
using namespace std;

template <typename T>
class StackInterface {
public:


    // Removes and returns the stack top entry
    // @return the item at the top of the stack
    // @throws EmptyStackException if the stack is empty before the operation
    virtual T pop() = 0;

    // Adds a new entry to the top of the stack
    //  @param newEntry added to the top of the stack
    virtual void push(T newEntry) = 0;

    // @return the item at the top of the stack
    // @throws EmptyStackException if the stack is empty before the operation
    virtual T peek() = 0;

    // detects whether the stack is empty
    // @return true of the stack is empty
    virtual bool isEmpty() = 0;

    // removes all entries from the stack
    virtual void clear() = 0;
};