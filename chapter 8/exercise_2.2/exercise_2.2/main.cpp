//
//  main.cpp
//  exercise_2.2
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class A {
    public:
        virtual void fa(void) {
            cout <<"A::fa" <<endl;
        }
        void fb(void) {
            cout <<"A::fb" <<endl;
        }
};

class B: public A {
    public:
        void fa(void) {
            cout <<"B::fa" <<endl;
        }
        void fb(void) {
            cout <<"B::fb" <<endl;
        }
};

int main() {
    A *pa = new A;
    A *pb = new B;
    pa->fa();
    pb->fb();
    pb->fa();
    pb->A::fa();
    ((B *) pb) ->fb();
}
