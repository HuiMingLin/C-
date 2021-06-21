//
//  main.cpp
//  exercise_6
//
//  Created by 林惠铭 on 2020/3/16.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>
void sort(T m1, T m2, T m3){
    T array[3] = {m1, m2, m3}, temp;
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout <<array[0] <<", " <<array[1] <<", " <<array[2] <<endl;
}

int main(){
    sort(5, 1, 9);
    return 0;
}
