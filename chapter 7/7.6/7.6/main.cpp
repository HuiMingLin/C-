//
//  main.cpp
//  7.6
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    double a[] = {1.1, 4.4, 3.3, 2.2};
    vector <double> va(a, a + 4), vb(4);
    typedef vector <double>::iterator iterator;
    iterator first = va.begin();
    for(first; first < va.end(); first++) {
        cout <<*first <<" ";
    }
    cout <<endl;
    for(--first; first > va.begin() - 1; first--) {
        cout <<*first <<" ";
    }
    cout <<endl;
    copy(va.begin(), va.end(), ostream_iterator<double>(cout, " "));
    cout <<endl;

    typedef vector <double>::reverse_iterator reverse_iterator;
    reverse_iterator last = va.rbegin();
    for(last; last < va.rend(); last++) {
        cout <<*last <<" ";
    }
    for (--last; last > va.rbegin() - 1; last--) {
        cout <<*last <<" ";
    }
    copy(va.rbegin(), va.rend(), ostream_iterator<double>(cout, " "));
    cout <<endl;
}

