//
//  main.cpp
//  4.1
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
    y = y = b;
}
void Point::Display() {
    cout <<Getx() <<", " <<Gety() <<endl;
}
inline int Point::Getx() {
    return x;
}

int main(){
    Point a;
    a.Setxy(10, 20);
    a.Display();
    
    return 0;
}

