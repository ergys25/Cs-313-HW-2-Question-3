//
// Created by ergys on 10/31/2020.
//

#include "ArrayStack.h"
#include <iostream>

ArrayStack::ArrayStack() {
    top = -1;

}//ArrayStack

void ArrayStack::ArrayPush(int x) { // push an element on the stack
    stack[++top] = x;
}//ArrayPush

int ArrayStack::ArrayPop() { // remove the first element of the stack
    int x = stack[top];
    stack[top--] = NULL;
    return x;
}//ArrayPop

int ArrayStack::ArrayTop() { // see the top element of the stack
    int x = stack[top];
    return x;
}//ArrayTop

bool ArrayStack::ArrayIsEmpty() { //returns true if top is empty
    return (top < 0);
}//ArrayIsEmpty
