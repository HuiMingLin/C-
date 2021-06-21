//
//  main.cpp
//  9.1
//
//  Created by 林惠铭 on 2020/4/3.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class str {
    char *st;
public:
    str(char *s);
    str(str &s);
    str &operator = (str &a);
    str &operator = (char *s);
    void print() {
        cout <<st <<endl;
    }
    ~str() {
        delete st;
    }
};

str::str(char *s) {
    st = new char[strlen(s) + 1];
    strcpy(st, s);
}

str::str(str &a) {
    st = new char[strlen(a.st) + 1];
    strcpy(st, a.st);
}

str &str::operator = (str &a) {
    if (this == &a) {
        return *this;
    }

    delete st;
    st = new char[strlen(a.st) + 1];
    strcpy(st, a.st);
    return *this;
}

str &str::operator = (char *s) {
    delete st;
    st = new char[strlen(s) + 1];
    strcpy(st, s);
    return *this;
}

int main() {
    str s1("We"), s2("They"), s3(s1);
    
    s1.print();
    s2.print();
    s3.print();
    
    s2 = s1 = s3;
    s3 = "Go home!";
    s3 = s3;
    
    s1.print();
    s2.print();
    s3.print();
}

