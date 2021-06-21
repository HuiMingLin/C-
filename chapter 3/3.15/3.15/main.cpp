//
//  main.cpp
//  3.15
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <complex>
#include <string>
using namespace std;

void printer(complex<int>);
void printer(complex<double>);
int main(){
    complex <int> num1(2, 4);
    complex <double> num2(3.5, 4.5);
    printer(num1);
    printer(num2);
}
void printer(complex<int>a){
    string str1("real is "), str2 = "image is ";
    cout <<str1 <<a.real() <<',' <<str2 <<a.imag() <<endl;
}
void printer(complex<double>a){
    string str1("real is "), str2 = "image is ";
    cout <<str1 <<a.real() <<',' <<str2 <<a.imag() <<endl;
}

