//
//  main.cpp
//  9.8
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a = 15;
    cout.setf(ios_base::showpoint);
    cout <<123.0 <<" ";
    cout.unsetf(ios_base::showpoint);
    cout <<123.0 <<endl;

    cout.setf(ios_base::showpoint);
    cout.setf(ios_base::hex, ios_base::basefield);
    cout <<a <<" " <<uppercase <<hex <<a <<" " <<nouppercase
         <<hex <<a <<" " <<noshowbase <<a <<dec <<" " <<a <<endl;

    float c = 23.56f, d = -101.22F;
    cout.width(20);
    cout.setf(ios_base::scientific | ios_base::right | ios_base::showpos, ios_base::floatfield);
    cout <<c <<"\t" <<d <<"\t";
    cout.setf(ios_base::fixed | ios_base::showpos, ios_base::floatfield);
    cout <<c <<"\t" <<d <<endl;

    cout <<cout.flags() <<" " <<123.0 <<" ";
    cout.flags(513);
    cout <<123.0 <<endl;

    cout.setf(ios_base::scientific);
    cout <<123.0 <<endl;
    cout.width(8);
    cout <<cout.fill('*') <<123 <<endl;
}
