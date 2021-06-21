//
//  main.cpp
//  9.7
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

const double PI = 3.141592;

int main() {
    int a = 15; bool it = 1, notIt = 0;
    cout <<showpoint <<123.0 <<" "
         <<noshowpoint <<123.0 <<" ";
    cout <<showbase;
    cout <<a <<" " <<uppercase <<hex <<a <<" " <<nouppercase
         <<hex <<a <<" " <<noshowbase <<a <<dec <<a <<endl;

    cout <<uppercase <<scientific <<PI <<" " <<nouppercase <<PI <<" " <<fixed <<PI <<endl;

    cout <<cout.precision() <<" " <<PI <<" ";
    cout.precision(4);
    cout <<cout.precision() <<"" <<PI <<endl;

    cout.width(10);
    cout <<showpos <<right <<a <<" " <<noshowpos <<PI <<" ";
    cout <<it <<" " <<notIt <<" "
         <<boolalpha <<it <<" " <<" " <<notIt <<" "
         <<noboolalpha <<" " <<it <<" " <<notIt <<endl;

    cout.width(10);
    cout <<left <<PI <<" " <<123 <<" " <<cout.width() <<" ";
    
    cout <<123 <<" " <<cout.width() <<endl;
}
