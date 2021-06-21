//
//  main.cpp
//  6.2
//
//  Created by 林惠铭 on 2020/3/30.
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
class Rectangle : public Point {
    private:
        int H, W;
    public:
        Rectangle(int, int, int, int);
        void Show() {
            cout <<"x = " <<x <<", y = " <<y  <<", H = " <<H <<", W = " <<W <<endl;
        }
        ~Rectangle() {
            cout <<"Delete Rectangle" <<endl;
        }
};
Rectangle::Rectangle(int a, int b, int h, int w):Point(a, b) {
    H = h;
    W = w;
    cout <<"Rectangle..." <<endl;
};
int main() {
    Point a(3, 4);
    Rectangle r1(3, 4, 5, 6);
    a.Show();
    r1.Show();
}

