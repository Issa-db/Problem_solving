//
// Created by Issa_db on 19/12/2025.
//

#include <iostream>
using namespace std;

int main() {
    // Right Shift Process

    //first transform to Binary Decimal
    // 5 >> 101
    //every shift we divide by 2 (forget the remin)
    //5>>1(first-shift) (5/2) = 2
    //5>>2(second-shift) (2/2) = 1
    // 5>>3(third-shift) (1/2) = 0

    int x = 5;
    x>>=3;
    cout<<x<<endl;
    return 0;
}