//
//  main.cpp
//  6.4
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
        }
        void Show() {
            cout <<"x = " <<x <<", y = " <<y <<endl;
        }
};

class Rectangle : private Point {
    private:
        int H, W;
    public:
        Rectangle(int a, int b, int h, int w):Point(a, b){
            H = h;
            W = w;
        }
        void Show() {
            Point::Show();
            cout <<"H = " <<H <<", W = " <<W <<endl;
        }
};
class Test : public Rectangle {
    public:
        Test(int a, int b, int h, int w):Rectangle(a, b, h, w) {}
        void Show() {
            Rectangle::Show();
        }
};

int main() {
    
}
