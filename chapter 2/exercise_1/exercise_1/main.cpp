//
//  main.cpp
//  exercise_1
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "Where are you?";
    string str2 = "I am here!";
    string str3;
    str3 = str1 + str2;
    cout <<str3;
    cout <<endl;

    char charX[] = "Where are you?";
    char charY[] = "I am here!";
    char charZ[48];


//    copy(charX, charX + 28, charZ);
//    copy(charY, charY + 20, charZ + 14);
    
    int i = 0, k = 0;
    for(i = 0; i < 48; i++){
        charZ[i] = '\0';
    }
    i = 0;
    while(charX[i] != '\0'){
        charZ[k] = charX[i];
        i++;
        k++;
    }
    i = 0;
    while(charY[i] != '\0'){
        charZ[k] = charY[i];
        i++;
        k++;
    }

    cout <<charZ;
    cout <<endl;
}
