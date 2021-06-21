//
//  main.cpp
//  7.10
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    char st[11] = "abcdefghij";
    vector <char>a(st, st + 10);
    for(int j = 0; j < 10; j++) {
        cout <<a[j] <<" ";
    }
    cout <<endl;

    cout <<a.capacity() <<"," <<a.size() <<endl;
    a.pop_back();
    a.push_back('W');
    a.push_back('P');
    
    for(int j = 0; j < a.size(); j++) {
        cout <<a[j] <<" ";
    }
    cout <<endl;

    cout <<a.capacity() <<"," <<a.size() <<",";
    a.clear();

    cout <<a.empty();
    cout <<endl;
}
