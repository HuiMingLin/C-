//
//  main.cpp
//  exercise_8
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 sum(T1 a[], T2 n) {
    int i;
    T1 s = 0;
    for (i = 0; i < n; i++){
        s = s + a[i];
    }
    return s;
}

template <typename T>
T sum(T a[], T n, T b[], T m) {
    return sum(a, n) + sum(b, m);
}


int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s1 = sum(a, 5);
    int s2 = sum(b, 10);
    int s3 = sum(a, 5, b, 10);
    cout <<s1 <<endl;
    cout <<s2 <<endl;
    cout <<s3 <<endl;
    
    return 0;
}
