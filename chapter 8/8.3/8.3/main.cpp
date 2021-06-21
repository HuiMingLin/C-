//
//  main.cpp
//  8.3
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class A {
    public:
        A() {}
        virtual void func() {
            cout <<"Constructing A " <<endl;
        }
        ~A() {}
        virtual void fund() {
            cout <<"Destructor A " <<endl;
        }
    
};

class B: public A {
    public:
        B() {
            func();
        }
        void fun() {
            cout <<"Come here and go ... ";
            func();
        }
        ~B() {
            fund();
        }
};


class C: public B {
    public:
        void func() {
            cout <<"Class C" <<endl;
        }
        ~C() {
            fund();
        }
        void fund() {
            cout <<"Destructor C " <<endl;
        }
};

int main() {
    C c;
    c.fun();
}
