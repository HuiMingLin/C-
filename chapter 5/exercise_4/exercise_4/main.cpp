//
//  main.cpp
//  exercise_4
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class test {
        int X;
    public:
        test(int a) {
            X = a;
        }
        int GetX() {
            return X;
        }
};
int main() {
    int i;
    test *p, a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (p = &a[0][0], i = 0; i <= 6; i++, p++) {
        if ((p - a[0]) % 3 == 0) cout <<endl;
        cout <<p->GetX() <<" ";
    }
    cout <<a[0];
}

