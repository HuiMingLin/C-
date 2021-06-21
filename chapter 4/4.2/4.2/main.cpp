//
//  main.cpp
//  4.2
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
        void Setxy(int a, int b);
        void Move(int a, int b);
        void Display();
        int Getx();
        int Gety() {
            return y;
        }
};

void Point::Setxy(int a, int b) {
    x = a;
    y = b;
}
void Point::Move(int a, int b) {
    x = x + a;
    y = y + b;
}
void Point::Display() {
    cout <<Getx() <<", " <<Gety() <<endl;
}
inline int Point::Getx() {
    return x;
}

void print(Point a) {
    a.Display();
}

int main() {
    Point A, B;
    A.Setxy(25, 55);
    B = A;
    A.Display();
    A.Move(-10, 20);
    print(A);
    print(B);
    cout <<A.Getx() <<endl;
    
    return 0;
}
