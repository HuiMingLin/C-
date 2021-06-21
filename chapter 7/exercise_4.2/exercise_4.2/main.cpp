//
//  main.cpp
//  exercise_4.2
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>
class Point {
    public:
        T x, y;
        Point(T a = 0, T b = 0) {
            x = a;
            y = b;
        }
        Point(const Point &t) {
            x = t.x;
            y = t.y;
        }
        void display() {
            cout <<x <<"," <<y <<endl;
        }
};


template <typename T>
class Line:public Point<T> {
        T x1, y1;
    public:
        Line(T a = 0, T b = 0, T c = 0, T d = 0): Point<T>(a, b) {
            x1 = c;
            y1 = d;
        }
        Line(const T &line) {
            x1 = line.x1;
            y1 = line.y1;
        };
        void display() {
            Point<T>::display();
            cout <<x1 <<"," <<y1 <<endl;
        }
};

template <typename T>
class Line1: public Point<T> {
        Point <T> p1, p2;
    public:
        Line1(T a, T b, T c, T d) {
            p1.x = a;
            p1.y = b;
            p2.x = c;
            p2.y = d;
        }
        Line1(const T &line) {
            p1 = line.p1;
            p2 = line.p2;
        };
        void display() {
            cout <<p1.x <<"," <<p1.y <<endl;
            cout <<p2.x <<"," <<p2.y <<endl;
        }
};

int main() {
    Line<double> ad1(4.5, 5.5, 6.5, 7.5);
    ad1.display();

    Line<double> ae1(ad1);
    ae1.display();
     
    Line1<double> ad2(4.5, 5.5, 6.5, 7.5);
    ad2.display();

    Line1<double> ae2(ad2);
    ae2.display();
}
