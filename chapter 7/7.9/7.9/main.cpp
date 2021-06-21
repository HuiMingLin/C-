//
//  main.cpp
//  7.9
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
int main() {
    vector <char> a(10), b(10);
    cout <<a.empty() <<", " <<sizeof(a) <<", ";
    for(char i = 'a', j = 0; j < 10; j++) {
        a[j] = i + j;
    }
    cout <<a.max_size() <<", " <<a.capacity()
         <<", " <<a.size() <<endl;
    for(int j = 0; j < 10; j++) {
        cout <<a[j] <<" ";
    }
    cout <<endl;

    copy(a.begin(), a.end(), b.begin());
    copy(a.begin(), a.end(), ostream_iterator<char>(cout, " "));
    cout <<endl;

    reverse_copy(a.begin(), a.end(), ostream_iterator<char>(cout, " "));
    cout <<endl;

    cout <<a.front() <<"," <<a.back() <<"," <<a.operator[](5);
    cout <<endl;
    
    sort(b.begin(), b.end(), greater<char>());
    copy(b.begin(), b.end(), ostream_iterator<char>(cout, " "));
    cout <<endl;
}

