//
//  main.cpp
//  exercise_4.5
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
class Line {
    protected:
        double sizeA;
    public:
        Line() {
            cout <<"请输入第一条直角边长度: " <<endl;
            cin >>sizeA;
        }
        Line(double a) {
            sizeA = a;
        }
        double getLength() {
            return sizeA;
        }
};
class Triangle: public Line {
    protected:
        double sizeB, sizeC;
    public:
        Triangle() {
            cout <<"请输入第二条直角边长度: " <<endl;
            cin >>sizeB;
            sizeC = sqrt(sizeB * sizeB + sizeA * sizeA);
        }
        void printSize() {
            cout <<"三角形三边长度为: ";
            cout <<"A: " <<sizeA <<", b: " <<sizeB <<", C: " <<sizeC <<endl;
        }
};
class Rectangle: public Triangle {
    protected:
        double sizeD;
    public:
        Rectangle() {
            sizeC = sizeA;
            sizeD = sizeB;
        }
        void printSize() {
            cout <<"长方形四边长度为: ";
            cout <<"A: " <<sizeA <<", b: " <<sizeB <<", C: " <<sizeC <<", D: " <<sizeD
                 <<endl;
        }
};

int main() {
    Line *l = new Line();
    cout <<"l 的长度: " <<l->getLength() <<endl;

    Triangle *t = new Triangle();
    t -> printSize();
    cout <<endl;
    Rectangle *r = new Rectangle();
    r -> printSize();
    cout <<endl;
}

