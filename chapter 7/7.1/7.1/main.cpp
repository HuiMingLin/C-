//
//  main.cpp
//  7.1
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>
class TAnyTemp {
    T x, y;
    public:
        TAnyTemp(T X, T Y):x(X), y(Y){}
        T getx() {
            return x;
        }
        T gety() {
            return y;
        }
};

int main () {
    
}
