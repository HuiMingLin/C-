//
//  main.cpp
//  3.13
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
int add(int m1 = 0, int m2 = 0, int m3 = 0, int m4 = 0){
    return m1 + m2 + m3 + m4;
}
int main(){
    cout <<add(1, 3) <<", " <<add(1, 3, 5) <<", " <<add(1, 3, 5, 7) <<endl;
}
