//
//  main.cpp
//  6.5
//
//  Created by 林惠铭 on 2020/3/30.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class A {
    private:
        int a;
    public:
        void setA(int x) {
            a = x;
        }
        void showA() {
            cout <<"a = " <<a <<endl;
        }
};

class B {
    private:
        int b;
    public:
        void setB(int x) {
            b = x;
        }
        void showB() {
            cout <<"b = " <<b <<endl;
        }
};

class C: public A, private B {
    private:
        int c;
    public:
        void setC(int x, int y) {
            c = x;
            setB(y);
        }
    void showC() {
        showB();
        cout <<"c = " <<c <<endl;
    }
};

int main() {
    C obj;
    obj.setA(53);
    obj.showA();
    obj.setC(55, 58);
    obj.showC();
}
