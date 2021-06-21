//
//  main.cpp
//  exercise_6.1
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    private:
        int x, y;

    public:
        Point() {
            x = 0;
            y = 0;
        }
        Point(int a, int b) {
            x = a;
            y = b;
        }
        void setXY(int a, int b) {
            x = a;
            y = b;
        }
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
};
class Rectangle {
    private:
        Point point1, point2, point3, point4;

    public:
        Rectangle();
        Rectangle(Point one, Point two) {
            point1 = one;
            point4 = two;
            init();
        }
        Rectangle(int x1, int y1, int x2, int y2) {
            point1.setXY(x1, y1);
            point4.setXY(x2, y2);
            init();
        }
        void init() {
            point2.setXY(point4.getX(), point1.getY());
            point3.setXY(point1.getX(), point4.getY());
        }
        void printPoint() {
            cout <<"A: (" <<point1.getX() <<", " <<point1.getY() <<")" <<endl;
            cout <<"A: (" <<point2.getX() <<", " <<point2.getY() <<")" <<endl;
            cout <<"C: (" <<point3.getX() <<", " <<point3.getY() <<")" <<endl;
            cout <<"D: (" <<point4.getX() <<", " <<point4.getY() <<")" <<endl;
        }
        int getArea() {
            int height, width, area;
            height = point1.getY() - point3.getY();
            width = point1.getX() - point2.getX();
            area = height * width;
            if (area > 0) {
                return area;
            } else {
                return -area;
            }
        }
};
int main() {
    Point p1(-15, 56), p2(89, -10);
    Rectangle r1(p1, p2);
    Rectangle r2(1, 5, 5, 1);

    cout <<"r1: " <<endl;
    r1.printPoint();
    cout <<"r1 面积为: " <<r1.getArea() <<endl;

    cout <<"r2: " <<endl;
    r2.printPoint();
    cout <<"r2 面积为: " <<r2.getArea() <<endl;
}
