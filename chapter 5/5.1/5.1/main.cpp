//
//  main.cpp
//  5.1
//
//  Created by 林惠铭 on 2020/3/23.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class object {
    private:
        int val;
    public:
        object():val(0) {
            cout <<"Default constructor for object" <<endl;
        }
        object(int i):val(i) {
            cout <<"Constructor for object" <<val <<endl;
        }
        ~object() {
            cout <<"Destructor for object" <<val <<endl;
        }
};
class container {
    private:
        object one;
        object two;
        int data;
    public:
        container():data(0) {
            cout <<"Default constructor for container" <<endl;
        }
        container(int i, int j, int k);
        ~container() {
            cout <<"Destructor for container " <<data <<endl;
        }
};
container::container(int i, int j, int k): two(i), one(j) {
    data = k;
    cout <<"Constructor for container" <<data <<endl;
}
int main() {
    container obj, anObj(5, 6, 10);
}

