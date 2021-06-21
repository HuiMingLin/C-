//
//  main.cpp
//  exercise_4.4
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
class Point {
    protected:
        int x, y;
    public:
        Point(){}
};

class Circular:public Point {
    protected:
        double r, area;
    public:
        Circular(int a, int b) {
            x = a;
            y = b;
            r = sqrt(x * x + y * y);
            area = 3.141592653 * r * r;
        }
        void printPoint() {
            cout <<"点: (" <<x <<"," <<y <<")" <<endl;
        }
        void printRadius() {
            cout <<"半径: " <<r <<endl;
        }
        void printArea() {
            cout <<"面积: " <<area <<endl;
        }
};

int main() {
    Circular c(10, 25);
    c.printPoint();
    c.printRadius();
    c.printArea();
}
