//
//  main.cpp
//  exercise_2
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
char up(char c) {
    if (c > 97 && c < 123){
        return (c - 32);
    } else {
        return c;
    }
}
int main(){
    int i;
    char c[15] = {'A', 'v', 'e', 't', 'E', 'T', '%', '&', '4', 'Y', 'e', 'i', '@', '9', '^'};
    for (i = 0; i < 15; i++) {
        cout <<up(c[i]) <<endl;
    }
    cout <<endl;
    
    return 0;
}
