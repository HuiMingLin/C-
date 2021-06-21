//
//  main.cpp
//  2.10
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <complex>
#include <string>
using namespace std;
int main(){
    complex <int> num1(2, 3);
    complex <float> num2(3.5, 4.5);
    string str1("real is ");
    string str2 = "image is ";
    cout <<str1 <<num1.real() <<", " <<str2 <<num1.imag() <<endl;
    cout <<str2 <<num2.real() <<", " <<str2 <<num2.imag() <<endl;
}
