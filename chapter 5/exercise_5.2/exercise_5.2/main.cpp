//
//  main.cpp
//  exercise_5.2
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>

#include <iostream>
using namespace std;
int main() {
    int i, n, temp;
    cout <<"需要存多少个数值呢？ ";
    cin >>n;
    double *array = new double[n];
    cout <<"存入数组的每个元素是: " <<endl;
    for (i = 0; i < n; i++) {
        cout <<"array[" <<i <<"] = ";
        cin >> temp;
        *(array+i) = temp;
    }
    cout <<"数组的元素是: " <<endl;
    for (i = 0; i < n; i++) {
        cout <<"array[" <<i <<"] = " <<array[i] <<endl;
    }
    delete [] array;
}
