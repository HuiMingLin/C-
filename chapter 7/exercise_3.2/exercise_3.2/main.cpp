//
//  main.cpp
//  exercise_3.2
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>

class Point {
    int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
        }
};

template <typename T>
class Line: public Point {
    T x2, y2;
    public:
        Line(T a, T b, T c, T d): Point(a, b) {
            x2 = c;
            y2 = d;
        }
};

int main() {
    
}
