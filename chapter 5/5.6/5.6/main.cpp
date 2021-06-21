//
//  main.cpp
//  5.6
//
//  Created by 林惠铭 on 2020/3/25.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Two {
        int y;
    public:
        friend class One;
};
class One {
        int x;
    public:
        One(int a, Two &r, int b) {
            x = a;
            r.y = b;
        }
        void Display(Two &);
};
void One::Display(Two &r) {
    cout <<x <<" " <<r.y <<endl;
}
int main() {
    Two Obj2;
    One Obj1(23, Obj2, 55);
    Obj1.Display(Obj2);
}
