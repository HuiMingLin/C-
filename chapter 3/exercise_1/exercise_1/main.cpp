//
//  main.cpp
//  exercise_1
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int equation_1(int a, int b, int c){
    double x1, x2, temp;
    temp = b * b - 4 * a * c;
    x1 = (-b + sqrt(temp)) / (2 * a * 1.0);
    x2 = (-b - sqrt(temp)) / (c * a * 1.0);
    cout <<"两个不相等的实根" <<endl;
    cout <<"x1 = " <<x1 <<", x2 = " <<x2 <<endl;
    
    return 0;
}

int equation_2(int a, int b, int c){
    double x1, x2, temp;
    temp = b * b - 4 * a * c;
    x1 = (-b + sqrt(temp)) / (2 * a * 1.0);
    x2 = x1;
    cout <<"两个相等的实根" <<endl;
    cout <<"x1 = " <<x1 <<", x2 = " <<x2 <<endl;
    
    return 0;
}

int equation_3(int a, int b, int c){
    double temp, real1, real2, image1, image2;
    temp = -(b * b - 4 * a * c);
    real1 = -b / (2 * a * 1.0);
    real2 = real1;
    image1 = sqrt(temp);
    image2 = -image1;
    cout <<"两个虚根" <<endl;
    cout <<"x1 = " <<real1 <<" + " <<image2 <<"j" <<endl;
    cout <<"x2 = " <<real2 <<" + " <<image2 <<"j" <<endl;
    
    return 0;
}

int main(){
    int a, b, c;
    double temp;
    cout <<"输入 a,b,c 的值" <<endl;
    cin >>a >>b >>c;
    cout <<"方程为: " <<a <<"x*x+" <<b <<"x+" <<c <<" = 0" <<endl;
    temp = b * b - 4 * a * c;
    if (temp > 0){
        equation_1(a, b, c);
    }
    if (temp == 0) {
        equation_2(a, b, c);
    }
    if (temp < 0) {
        equation_3(a, b, c);
    }
}
