//
//  main.cpp
//  3.9
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
float *input(int &);
int main(){
    int num;
    float *data;
    data = input(num);
    if (data) {
        for (int i = 0; i < num; i++){
            cout <<data[i] <<" ";
        }
        cout <<endl;
        delete data;
    }
}

float *input (int &n){
    cout <<"Input number: ";
    cin >> n;
    if (n <= 0) return NULL;
    float *buf = new float[n];
    if (buf == 0) return NULL;
    for (int i = 0; i < n; i++){
        cin >>buf[i];
    }
    return buf;
}
