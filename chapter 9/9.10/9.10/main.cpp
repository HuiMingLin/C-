//
//  main.cpp
//  9.10
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

struct list {
    double salary;
    char name[20];
    friend ostream &operator <<(ostream &os, list &ob);
    friend istream &operator >>(istream &is, list &ob);
};

istream &operator >>(istream &is, list &ob) {
    is >>ob.name;
    is >>ob.salary;
    return is;
}

ostream &operator <<(ostream &os, list &ob) {
    os <<ob.name <<" ";
    os <<ob.salary <<" ";
    return os;
}

int main() {
    list worker1[2] = {{1256, "LiMing"}, {3467, "ZhangHong"}}, worker2[2];
    ofstream out("pay.txt", ios::binary);
    if (!out) {
        cout <<"没有正确建立文件，结束程序运行！" <<endl;
        return 0;
    }

    for(int i = 0; i < 2; i++) {
        out <<worker1[i];
    }
    out.close();

    ifstream in("pay.txt", ios::binary);
    if(!in) {
        cout <<"没有正确建立文件，结束程序运行！" <<endl;
        return 0;
    }

    for(int i = 0; i < 2; i++) {
        in >>worker2[i];
        cout <<worker2[i] <<endl;
    }
    in.close();
}

