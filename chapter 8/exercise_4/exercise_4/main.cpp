//
//  main.cpp
//  exercise_4
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class base {
        int i;
        int j;
    public:
        base(int I, int J): i(I), j(J) {
            display();
        }
        int getI(void) const {
            return i;
        }
        int getJ(void) const {
            return j;
        }
        void display(void) const {
            cout <<"i=" <<i <<"\t" <<"j=" <<j <<endl;
        }
};

class derived: public base {
        int k;
    public:
        derived(int I, int J, int K): base(I, J), k(K) {
            display();
        }
        void display(void) const {
            cout <<"i=" <<getI() <<"\t" <<"j=" <<getJ() <<"\t" <<"k=" <<k <<endl;
            cout <<"i+k= " <<getI() + k <<"\t" <<"j+k=" <<getJ() + k <<endl;
        }
};

int main(void) {
    base b3(8, 9);
    derived d1(10, 20, 5);
}

/**
    i = 8   j = 9
    i = 10  j = 20
    i = 10  j = 20  k = 5
    i + k = 15  j + k = 25
**/

