//
//  main.cpp
//  exercise_3
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
double power(double a, int b){
    int i;
    double result = 1.0;
    for (i = 0; i < b; i++){
        result = result * a;
    }
    return result;
}

int main(){
    double r;
    int n;
    cout <<"r = ";
    cin >>r;
    cout <<"n = ";
    cin >>n;
    cout <<r <<"的" <<n <<"次幂是: " <<power(r, n) <<endl;
    
    return 0;
}
