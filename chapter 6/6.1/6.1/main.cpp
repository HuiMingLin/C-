//
//  main.cpp
//  6.1
//
//  Created by 林惠铭 on 2020/3/30.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    private:
        int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
            cout <<"Point..." <<endl;
        }
        void Showxy() {
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
        Rectangle(int a, int b, int h, int w):Point(a, b) {
            H = h;
            W = w;
            cout <<"Rectangle..." <<endl;
        };
        void Show() {
            cout <<"H = " <<H <<", W = " <<W <<endl;
        }
        ~Rectangle() {
            cout <<"Delete Rectangle" <<endl;
        }
};
int main() {
    Rectangle r1(3, 4, 5, 6);
    r1.Showxy();
    r1.Show();
}
