//
//  main.cpp
//  exercise_5.1
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class base {
    private:
        int a, b;
    public:
        ~base() {
            cout <<"Destory..." <<a <<"," <<b <<endl;
        }
        base(int a, int b):b(b), a(a) {
            cout <<"初始化..." <<a <<"," <<b <<endl;
        }
};

int main() {
    base a(1, 2);
}

