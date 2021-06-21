//
//  main.cpp
//  inline-function
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

inline int isNumber(char c) {
    return (c>='0' && c<='9') ? 1 : 0;
}

int main() {
    char c;
    cin >>c;
    if(isNumber(c)) cout <<"You entered a digit";
    else cout<<"You entered a non - digit";
    cout <<endl;
}
