//
//  main.cpp
//  exercise_3.1
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>

class base {
    int m;
public:
    base(int a): m(a){};
    int Getx() {
        return m;
    }
};

class derived: private base {
    public:
        derived(int b): m(b) {
            
        }
};

int main(int argc, const char * argv[]) {
    
}
