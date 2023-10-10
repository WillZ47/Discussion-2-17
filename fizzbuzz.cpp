//
// Created by William Zhao on 10/9/23.
//

#include <iostream>
#include "fizzbuzz.h"
using namespace std;

void fizzbuzz(int fizzmod, int buzzmod){

    for (int i = 1; i < 101; i++) {
        if (i % fizzmod == 0) {
            cout << "Fizz";
        }

        if (i % buzzmod == 0) {
            cout << "Buzz";
        }

        if (i % buzzmod != 0 && i % fizzmod != 0) {
            cout << i;
        }

        if( i != 100) {
            cout << ", ";
        }

        else {
            break;
        }
    }
}

