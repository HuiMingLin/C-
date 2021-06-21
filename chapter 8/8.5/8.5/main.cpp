//
//  main.cpp
//  8.5
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class A {
    public:
        virtual void f() {
            cout <<"Call A" <<endl;
            
        }
};

class B {
    public:
        virtual void f() {
            cout <<"Call B" <<endl;
        }
};

class C: public A, public B {
    public:
        void f() {
            cout <<"Call C" <<endl;
        }
};

int main(int argc, const char * argv[]) {
    A *pa;
    B *pb;
    C *pc, c;
    pa = &c; pb = &c; pc = &c;
    pa->f();
    pb->f();
    pc->f();
}
