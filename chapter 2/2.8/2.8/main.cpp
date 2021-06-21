//
//  main.cpp
//  2.8
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1("We are here!");
    string str2 = "Where are you?";
    cout <<str1[0] <<str1[11] <<"," <<str1 <<endl;
    cout <<str2[0] <<str2[13] <<"," <<str2 <<endl;
    cout <<"please input a word: ";
    cin >>str1;
    cout <<"length of the " <<str1 <<" is " <<str1.size() <<"." <<endl;
}

