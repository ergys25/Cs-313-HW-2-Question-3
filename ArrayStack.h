//
// Created by ergys on 10/31/2020.
//

#ifndef QUESTION3_ARRAYSTACK_H
#define QUESTION3_ARRAYSTACK_H


class ArrayStack {
public:
    int top;
    int* stack = new int[10000000]; // A stack of a size of 10 million
    ArrayStack();
    void ArrayPush(int x);
    int ArrayPop();
    int ArrayTop();
    bool ArrayIsEmpty();


};


#endif //QUESTION3_ARRAYSTACK_H
