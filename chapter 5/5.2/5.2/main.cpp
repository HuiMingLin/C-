//
//  main.cpp
//  5.2
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

class Test {
        static int x;
        int n;
    public:
        Test(){}
        Test(int a, int b) {
            x = a;
            n = b;
        }
        static int func() {
            return x;
        }
        static void sfunc(Test &r, int a) {
            r.n = a;
        }
        int Getn() {
            return n;
        }
};
int Test::x = 25;
#include <iostream>
using namespace std;
int main() {
    cout <<Test::func();
    Test b, c;
    b.sfunc(b, 58);
    cout <<" " <<b.Getn();
    cout <<" " <<b.func();
    cout <<" " <<c.func();
    cout <<endl;
    Test a(24, 56);
    cout <<" " <<a.func() <<" " <<b.func() <<" " <<b.func() <<endl;
}
