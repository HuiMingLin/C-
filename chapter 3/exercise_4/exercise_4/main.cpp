//
//  main.cpp
//  exercise_4
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
void print_triangle(char c, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        cout <<setw(n - i);
        for (j = 0; j < i + 1; j++){
            cout <<c;
        }
        cout <<endl;
    }
}

int main() {
    print_triangle('*', 10);
    return 0;
}

