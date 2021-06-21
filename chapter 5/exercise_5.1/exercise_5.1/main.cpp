//
//  main.cpp
//  exercise_5.1
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Complex {
    private:
        double real, image;
    public:
        Complex() {
            real = 0;
            image = 0;
        };
        Complex(double a, double b) {
            real = a;
            image = b;
        }
        void SetRI(double a, double b) {
            real = a;
            image = b;
        }
        double getReal() {
            return real;
        }
        double getImage() {
            return image;
        }
        void print() {
            if (image > 0) {
                cout <<"" <<real <<" + " <<image <<"i" <<endl;
            }
            if (image < 0) {
                cout <<"" <<real <<" - " <<image <<"i" <<endl;
            }
        }
        friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.image = c1.image + c2.image;
    return c3;
}

int main() {
    Complex c1(19, 0.864), c2, c3;
    c2.SetRI(90, 125.012);
    c3 = add(c1, c2);
    cout <<"c1: ";
    c1.print();
    cout <<"c2: ";
    c2.print();
    cout <<"c3: ";
    c3.print();
}

