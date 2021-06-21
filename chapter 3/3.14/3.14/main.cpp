//
//  main.cpp
//  3.14
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T>
T sum (T m1, T m2){
    return (m1 > m2) ? m1 : m2;
}

int main(){
    int i = sum<int>(2, 5);
    double j = sum<double>(2.0, 5.);
    char k = sum<char>('w', 'a');
    string o = sum<string>("ABC", "ABD");
    
    cout <<i <<endl;
    cout <<j <<endl;
    cout <<k <<endl;
    cout <<o <<endl;
    return 0;
}
