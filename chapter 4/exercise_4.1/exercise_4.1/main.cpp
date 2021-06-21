//
//  main.cpp
//  exercise_4.1
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class base {
    int x, y;
public:
    void init(int a, int b) {
        x = a;
        y = b;
    }
    void print() {
        int sum = 2 * x - y;
        cout <<"2 * " <<x <<" - " <<y <<" = " <<sum <<endl;
    }
};
int main(){
    base a;
    a.init(68, 55);
    a.print();
}
