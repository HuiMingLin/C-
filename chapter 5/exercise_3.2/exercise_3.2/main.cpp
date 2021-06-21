//
//  main.cpp
//  exercise_3.2
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>

class Test {
    int x;
    int y;
    public:
        Test(int i, int j): x(i), y(j){};
};

int main(int argc, const char * argv[]) {
    Test *two[2] = {new Test(4, 5), new Test(6, 8)};
    for (int i = 0; i < 2; i++) {
        delete two[i];
    }
    return 0;
}
