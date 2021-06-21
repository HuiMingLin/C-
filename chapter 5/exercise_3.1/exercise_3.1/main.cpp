//
//  main.cpp
//  exercise_3.1
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class base {
        int number;
        static int a;
    public:
        void set(int t, int j) {
            number = t;
        };
        int getn() {return number;}
        static int geta() {return a;}
};
int base::a= 24;
int main() {
    base b;
    b.set(4, 1);
    cout <<b.getn() <<endl;
    cout <<b.geta() <<endl;
}
