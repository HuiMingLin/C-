//
//  main.cpp
//  exercise_5
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int strlen(string c) {
    int len = 0;
    while(c[len]) {
        len++;
    }
    return len;

}
void revers(string &s) {
    int len = strlen(s);
    int j = len / 2 - 1;
    char str;
    while(j >= 0) {
        str = s[j];
        s[j] = s[len - j - 1];
        s[len - j - 1] = str;
        j--;;
    }
}

int main(){
    string str("abcdefg");
    cout <<"str 的长度: " <<strlen(str) <<endl;
    cout <<"原字符串: " <<str <<endl;
    revers(str);
    cout <<"现字符串: " <<str <<endl;
    
    return 0;
}

