//
//  main.cpp
//  exercise_3.2
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        cout <<endl <<setw(10 - i) <<"*" <<setw(10) <<"*";
    }
}

