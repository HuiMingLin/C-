//
//  main.cpp
//  exercise_4.3
//
//  Created by 林惠铭 on 2020/4/1.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    sort(a, a + 10);

    vector <int> b(a, a + 10);
    b.push_back(11);

    reverse_copy(b.begin(), b.end(), ostream_iterator<int>(cout, " "));
    cout <<endl;


    cout <<"capacity: " <<b.capacity() <<endl;
}

