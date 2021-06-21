//
//  main.cpp
//  2.11
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str1 = "we are here!", str2 = str1;
    reverse(&str1[0], &str1[0] + 12);
    cout <<str1 <<endl;
    copy(&str1[0], &str1[0] + 12, &str2[0]);
    cout <<str2 <<endl;
    reverse_copy(&str2[0], &str2[12], ostream_iterator<char>(cout));
    cout <<endl;
}

