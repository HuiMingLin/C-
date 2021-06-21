//
//  main.cpp
//  8.6
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class base {
    public:
        virtual void print() {
            cout <<"In Base" <<endl;
        }
};

class derived: public base {
    public:
        void print() {
            cout <<"In Derived" <<endl;
        }
};

void display(base *pb, void(base::*pf)()) {
    (pb->*pf)();
}


int main(int argc, const char * argv[]) {
//    derived d;
//    base *pb = &d;
//    void (base::*pf)() = &base::print;
//    display(pb, pf);
    
    base b;
    derived d;
    display(&b, &base::print);
    display(&d, &base::print);
}
