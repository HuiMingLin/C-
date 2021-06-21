//
//  main.cpp
//  exercise_2
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str1("We are here!");
    cout <<str1[7] <<endl;

    string str2 = str1.substr(7, 1);
    cout <<str2 <<endl;

     cout <<*(find(str1.begin(), str1.end(), 'h')) <<endl;
}
