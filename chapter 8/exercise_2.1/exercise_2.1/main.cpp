//
//  main.cpp
//  exercise_2.1
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class base {
        int x;
    public:
        base(int a) {
            x = a;
            cout <<"base... " <<x <<endl;;
        }
        base(base &t) {
            x = t.x;
            cout <<"base copy... " <<x <<endl;
        }
        virtual ~base() {
            cout <<"~ base... " <<x <<endl;
        }
};

class derived: public base {
        int y;
    public:
        derived(int a, int b): base(a) {
            y = b;
            cout <<"derived... " <<y <<endl;
        }
        derived(derived &t): base(t) {
            y = t.y;
            cout <<"derived... " <<y <<endl;
        }
        ~derived() {
            cout <<"~derived... " <<y <<endl;
        }
};

int main() {
    base *pb = new derived(52, 54);
    base a(*pb);
    delete pb;
}
