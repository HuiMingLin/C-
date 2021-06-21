//
//  main.cpp
//  exercise_3.2
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class Base1 {
    protected:
        int m;
    public:
        void Show() {
            cout <<m <<endl;
        }
};

class Base2 {
    protected:
        int n;
    public:
        void Show() {
            cout <<n <<endl;
        }
};

class Derived: public Base1, public Base2 {
    public:
        void Set(int x, int y) {
            m = x;
            n = y;
        }
};

int main(int argc, const char * argv[]) {
    Derived Obj;
    Obj.Set(45, 87);
    Obj.Base1::Show();
    Obj.Base2::Show();
}
