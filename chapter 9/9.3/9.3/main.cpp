//
//  main.cpp
//  9.3
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
        int operator ++();
        int operator ++(int);
        void print() {
            cout <<"num = " <<num <<endl;
        }
};

int number::operator ++() {
    num++;
    return num;
}

int number::operator ++(int) {
    int i = num;
    num++;
    return i;
}

int main() {
    number n(10);
    int i = ++n;
//     int i = n.operator++();
    cout <<"i = " <<i <<endl;
    n.print();
    i = n++;
    // i = n.operator++(0);
    cout <<"i = " <<i <<endl;
    n.print();
}

