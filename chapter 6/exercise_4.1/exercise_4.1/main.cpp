//
//  main.cpp
//  exercise_4.1
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Basic {
    protected:
        double r;
    public:
        Basic() {
            r = 0;
        }
        Basic(double a):r(a) {}
};
class Circular: public Basic {
    protected:
        double area;
        
    public:
        Circular(double a) {
            r = a;
            area = 3.1415926 * r * r;
        }
        double getArea() {
            return area;
        }
};
class Column: public Circular {
    protected:
        double h;
        double cubage;
    public:
        Column(double a, double b):Circular(a) {
            h = b;
            cubage = getArea() * h;
        }
        double getCubage() {
            return cubage;
        }
};
int main() {
    Circular circular(45);
    Column column(12, 10);
    cout <<"面积: " <<circular.getArea() <<endl;
    cout <<"体积: " <<column.getCubage() <<endl;
}
