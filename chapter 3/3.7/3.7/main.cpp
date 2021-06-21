//
//  main.cpp
//  3.7
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
void change(const string&);
int main(){
    string str("Can you change it?");
    change(str);
    cout <<str <<endl;
}

void change(const string &s) {
    string s2 = s + " No!";
    cout <<s2 <<endl;
}
