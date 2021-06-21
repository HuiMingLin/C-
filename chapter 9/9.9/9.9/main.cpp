//
//  main.cpp
//  9.9
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch[15], *p = "abcdefg";
    ofstream myFile;
    myFile.open("myText.txt");
    myFile <<p;
    myFile <<"GoodBye!";
    myFile.close();
    ifstream getText("myText.txt");
    int i = 0;
    for(i = 0; i < strlen(p) + 8; i++) {
        getText >>ch[i];
    }
    ch[i]= '\0';
    getText.close();
    cout <<ch;

    cout <<endl;
}

