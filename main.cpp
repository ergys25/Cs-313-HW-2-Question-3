#include <iostream>
#include <chrono>
#include <random>
#include "ArrayStack.h"
#include "stack.h"

using namespace std::chrono;

int main() {
    //****************************************************************
    //First we will test the time it takes for the linked structure
    //and the ArrayStack to be filed.
    //
    //****************************************************************
    srand(static_cast<unsigned int>(time(nullptr))); // seed srand()
    stack s;
    ArrayStack As;
    //----------------------------LinkedStackPush------------------------------------------------
    auto start = high_resolution_clock::now(); //start time to measure performance execution
    for (int i = 0; i < 10000000; i++) {
        s.push(rand());
    }
    auto stop = high_resolution_clock::now(); //end time of execution performance measurement
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Time taken by linked stack for push : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;
    //--------------------------------------ArrayStackPush---------------------------------------------
    start = high_resolution_clock::now(); //start time to measure performance execution
    for (int i = 0; i < 10000000; i++) {
        As.ArrayPush(rand());
    }
    stop = high_resolution_clock::now(); //end time of execution performance measurement
    duration = duration_cast<microseconds>(stop - start);

    std::cout << "Time taken by Array stack for push : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;
    //----------------------------LinkedStackPop------------------------------------------------
     start = high_resolution_clock::now(); //start time to measure performance execution
    for (int i = 0; i < 10000000; i++) {
        s.top();
        s.pop();
    }
     stop = high_resolution_clock::now(); //end time of execution performance measurement
     duration = duration_cast<microseconds>(stop - start);
    std::cout << "Time taken by linked stack for pop : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;
    //--------------------------------------ArrayStackPop---------------------------------------------
    start = high_resolution_clock::now(); //start time to measure performance execution
    for (int i = 0; i < 10000000; i++) {
        As.ArrayTop();
        As.ArrayPop();
    }
    stop = high_resolution_clock::now(); //end time of execution performance measurement
    duration = duration_cast<microseconds>(stop - start);

    std::cout << "Time taken by Array stack for pop : "
              << duration.count() / 1000.0 << " Milliseconds" << std::endl;


}



