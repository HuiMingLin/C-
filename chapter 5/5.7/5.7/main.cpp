//
//  main.cpp
//  5.7
//
//  Created by 林惠铭 on 2020/3/27.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Base {
    private:
        int x;
        const int a;
        static const int b;
        const int &r;
    public:
        Base(int, int);
        void Show() {
            cout <<x <<"," <<a <<"," <<b <<"," <<r <<endl;
        }
        void Display(const double &r) {
            cout <<r <<endl;
        }
};
const int Base::b = 125;
Base::Base(int i, int j):x(i), a(j), r(x) {}
int main() {
    Base a1(104, 118), a2(119, 140);
    a1.Show();
    a2.Show();
    a2.Display(3.14159);
}
