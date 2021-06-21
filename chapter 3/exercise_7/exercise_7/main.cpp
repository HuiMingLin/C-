//
//  main.cpp
//  exercise_7
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T1, typename T2>
// template <typename T>
T1 sum(T1 a[], T2 n) {
    int i;
    T1 s = 0;
    for (i = 0; i < n; i++){
        s = s + a[i];
    }
    return s;
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int s = sum(a, 5);
    cout <<s <<endl;
    
    return 0;
}
