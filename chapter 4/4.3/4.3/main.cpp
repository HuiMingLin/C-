//
//  main.cpp
//  4.3
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    private:
        int x, y;
    public:
        void Setxy(int a, int b) {
            x = a;
            y = b;
        }
        void Move(int a, int b) {
            x = x + a;
            y = y + b;
        }
        void Dispaly() {
            cout <<x <<"," <<y <<endl;
        }
        int Getx() {
            return x;
        }
        int Gety() {
            return y;
        }
};

void print(Point *a) {
    a ->Dispaly();
}
void print(Point &a) {
    a.Dispaly();
}
int main(){
    Point A, B, *p;
    Point &RA = A;
    A.Setxy(25, 55);
    B = A;
    p = &B;
    p ->Setxy(112, 115);
    print(B);
    print(p);
    p ->Dispaly();
    RA.Move(-80, 23);
    print(A);
    print(&A);
    print(RA);
    
    return 0;
}
