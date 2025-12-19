//
// Created by Issa_db on 19/12/2025.
//

#include <iostream>
using namespace std;

int main () {

    // Bitwise AND operation with compund assignment
    // suppose x &=3 so it's same as x = x & 3
    // binary representation:
    // 5 = 101
    // 3 = 011
    // result :  0 0 1 retransform it again (1)

    int x = 5;
    x &=3;
    cout <<x<<endl;
    return 0;

}