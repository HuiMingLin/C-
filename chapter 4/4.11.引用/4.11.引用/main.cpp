//
//  main.cpp
//  4.11.引用
//
//  Created by 林惠铭 on 2020/3/21.
//  Copyright © 2020 林惠铭. All rights reserved.
//

//
//  main.cpp
//  4.11
//
//  Created by 林惠铭 on 2020/3/21.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    int x, y;
    public:
        void Set(int a, int b) {
            x = a;
            y = b;
        }
        int Getx(){
            return x;
        }
        int Gety(){
            return y;
    }
};
class Rectangle {
    Point Loc;
    int H, W;

    public:
        void Set(int x, int y, int h, int w);
        Point &GetLoc();
        int GetHeight() {
            return H;
        }
        int GetWidth() {
            return W;
        }
};
void Rectangle::Set(int x, int y, int h, int w) {
    Loc.Set(x, y);
    H = h;
    W = w;
}
Point &Rectangle::GetLoc(){
    return Loc;
}
int main(){
    Rectangle rect;
    rect.Set(10, 2, 25, 20);
    cout <<rect.GetHeight() <<"," <<rect.GetWidth() <<",";
    Point &p = rect.GetLoc();
    cout <<p.Getx() <<"," <<p.Gety() <<endl;
}

