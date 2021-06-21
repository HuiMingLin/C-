//
//  main.cpp
//  exercise_3
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class base {
        int m;
    public:
        base(int a) {
            m = a;
        }
        int Getm() {
            return m;
        }
        virtual void show() {
            cout <<Getm() <<endl;
        }
};


class derived: public base {
        int n;
    public:
        derived(int a, int b): base(a) {
            n = b;
        }
        virtual void show() {
            cout <<Getm() <<"," <<n <<endl;
        }
};

void print(base &p) {
    p.show();
}

int main() {
    base A(58);
    derived B(18, 28);
    print(A);
    print(B);
}

