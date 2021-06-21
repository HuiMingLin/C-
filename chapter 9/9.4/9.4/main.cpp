//
//  main.cpp
//  9.4
//
//  Created by 林惠铭 on 2020/4/5.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class number {
        int num;
    public:
        number(int i) {
            num = i;
        }
        friend int operator++(number &);
        friend int operator++(number &, int);
        void print() {
            cout <<"num = " <<num <<endl;
        }
};

int operator++(number &a) {
    a.num++;
    return a.num;
}

int operator++(number & a, int) {
    int i = a.num++;
    return i;
}

int main() {
    number n(10);
    int i = ++n;
    cout <<"i = " <<i <<endl;
    n.print();
    i = n++;
    cout <<"i = " <<i <<endl;
    n.print();
}

