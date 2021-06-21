//
//  main.cpp
//  exercise_4.2
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
class FUN {
    friend ostream &operator <<(ostream &, FUN);
} fun;

ostream &operator << (ostream &os, FUN f) {
    os.setf(ios::left);
    return os;
}

int main() {
    cout <<setfill('*') <<setw(10) <<12345 <<" ";
    cout <<fun <<setw(10) <<54321 <<endl;
}

