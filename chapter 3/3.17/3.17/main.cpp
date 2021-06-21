//
//  main.cpp
//  3.17
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>
T Max(T m1, T m2){
    return (m1 > m2) ? m1 : m2;
}

template <typename T>
T Min(T m1, T m2){
    return (m1 < m2) ? m1 : m2;
}

int main(){
    cout <<Max("ABC", "ABD") <<"," <<Min("ABC", "ABD") <<","
         <<Min('W', 'T') <<"," <<Min(2.0, 5.);
    cout <<"\t" <<Min<double>(8.5, 6) <<"," <<Min(8.5, (double)6) <<"," <<Max((int)8.5, 6);
    cout <<"\t" <<Min<int>(2.3, 5.8) <<"," <<Max<int>('a', 'y') <<"," <<Max<char>(95, 121) <<endl;
}
