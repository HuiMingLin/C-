//
//  main.cpp
//  exercise_4.2
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    private:
        int m, n;
    public:
        Point(int, int);
        Point(Point&);
        void print() {
            cout <<m <<" " <<n <<endl;
        }
};

Point::Point(int a, int b) {
    m = a;
    n = b;
}
Point::Point(Point &t) {
    m = t.m;
    n = t.n;
}

int main(){
    Point a(1, 2);
    Point b(a);
    a.print();
    b.print();
}
