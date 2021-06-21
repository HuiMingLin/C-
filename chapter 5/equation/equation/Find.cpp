//
//  FInd.cpp
//  equation
//
//  Created by 林惠铭 on 2020/3/28.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include "equation.hpp"
using namespace std;

void Read(float &, float &, float &);
void Read(float &a, float &b, float &c) {
    cout <<"输入方程系数 a: ";
    cin >>a;
    if (a == 0) {
        getchar();
        return;
    }
    cout <<"输入方程系数 b: ";
    cin >>b;
    cout <<"输入方程系数 c: ";
    cin >>c;
}

int main() {
    float a, b, c;
    cout <<"这是一个求方程 ax2 + bx + c = 0 的根的程序" <<endl;
    for (;;) {
        Read(a, b, c);
        if (a == 0) return 0;
        FindRoot obj(a, b, c);
        obj.Find();
        obj.Display();
    }
}

