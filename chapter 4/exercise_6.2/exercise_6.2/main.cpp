//
//  main.cpp
//  exercise_6.2
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
class Line {
    private:
        int x1, y1, x2, y2;
    public:
        Line();
        inline Line(int a, int b, int c, int d) {
            x1 = a;
            y1 = b;
            x2 = c;
            y2 = d;
        }
        void printPoint();
        double getLength();
};
inline void Line::printPoint() {
    cout <<"A: " <<x1 <<"," <<y1 <<endl;
    cout <<"B: " <<x2 <<"," <<y2 <<endl;
}
inline double Line::getLength() {
    double length;
    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return length;
}
int main() {
    Line line(10, 80, -10, 12);
    line.printPoint();
    cout <<line.getLength() <<endl;
}

