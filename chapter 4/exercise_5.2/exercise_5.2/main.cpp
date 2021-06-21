//
//  main.cpp
//  exercise_5.2
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class base {
    private:
        int x;
    public:
        void setx(int a) {
            x = a;
        }
        int getx() {
            return x;
        }
};
int main() {
    int *p;
    base a;
    a.setx(55);
    p = new int(a.getx());
    cout <<*p;
    cout <<endl;
}
