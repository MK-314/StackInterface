#include <iostream>
#include "ArrayBasedStack.h"
#include "StackInterface.h"

using namespace std;



int main() {
    StackInterface * aCharStack = new ArrayBasedStack();
    aCharStack->push(2);
    aCharStack->push(3);
    aCharStack->push(4);
    int top = aCharStack->peek();
    cout << top << " is the top of the stack";

    /*
    StackInterface<int>* anIntegerStack = new ArrayBasedStack<int>();
    anIntegerStack->push(2);
    anIntegerStack->push(3);
    anIntegerStack->push(4);
    int top_ = anIntegerStack->peek();
    cout << top_ << " is the top of the stack";*/

    return 0;
}