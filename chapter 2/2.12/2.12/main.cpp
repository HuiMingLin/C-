//
//  main.cpp
//  2.12
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string str1 = "wharehere!", str2(str1);
    reverse(str1.begin(), str1.end());
    cout <<str1 <<endl;
    copy(str1.begin(), str1.end(), str2.begin());
    sort(str1.begin(), str1.end());
    cout <<str1 <<endl;
    cout <<str2 <<endl;
    reverse_copy(str1.begin(), str1.end(), str2.begin());
    cout <<str2 <<endl;
    
    reverse(str2.begin() + 2, str2.begin() + 8);
    copy(str2.begin() + 2, str2.begin() + 8, ostream_iterator<char>(cout));
    
    cout <<endl;
    
    sort(str1.begin(), str1.end(), greater<char>());
    cout <<str1 <<endl;
    str1.swap(str2);
    cout <<str1 <<" " <<str2 <<endl;
    cout <<(*(find(str1.begin(), str1.end(), 'e')) == 'e')
        <<" "
        <<((*find(str1.begin(), str1.end(), 'O')) == 'O')
        <<endl;
}
