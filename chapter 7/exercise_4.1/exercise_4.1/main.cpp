//
//  main.cpp
//  exercise_4.1
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    protected:
        int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
            cout <<"Point..." <<endl;
        }
        void Show() {
            cout <<"x = " <<x <<", y = " <<y <<endl;
        }
        ~Point() {
            cout <<"Delete Point" <<endl;
        }
};

template <typename T>
class Rectangle:public Point {
    private:
        T H, W;
    public:
        Rectangle(T a, T b, T h, T w):Point(a, b) {
            H = h;
            W = w;
            cout <<"Rectangle..." <<endl;
        };
        void Show() {
            cout <<"x = " <<x <<", y = " <<y  <<", H = " <<H <<", W = " <<W <<endl;
        }
        ~Rectangle() {
            cout <<"Delete Rectangle" <<endl;
        }
};

int main() {
    Point a(1, 2);
    Rectangle <int> b(3, 4, 5, 6);
    a.Show();
    b.Show();

    Point &ra = b;
    ra.Show();

    Point *p = &b;
    p -> Show();

    a = b;
    a.Show();
}

