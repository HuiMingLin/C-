//
//  equation.hpp
//  equation
//
//  Created by 林惠铭 on 2020/3/28.
//  Copyright © 2020 林惠铭. All rights reserved.
//


#if !defined(EQUATION_H)
#define EQUATION_H
#include <iostream>
#include <cmath>
using namespace std;
//*******************************
//* 声明 FindRoot 类            *
//*******************************
class FindRoot {
    private:
        float a, b, c, d;
        double x1, x2;
    public:
        FindRoot(float x, float y, float z);
        void Find();
        void Display();
};
#endif /* equation_hpp */
