//
//  main.cpp
//  5.12
//
//  Created by 林惠铭 on 2020/3/28.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class A {
    private:
        int val;
    public:
        A(int i) {
            val = i;
        }
        int value(int a) {
            return val + a;
        }
};
int main() {
    int (A :: *pfun)(int) = &A :: value;
    A obj(10);
    cout <<(obj.*pfun)(15) <<endl;
    A *pc = &obj;
    cout <<(pc->*pfun)(15) <<endl;
}
