//
//  main.cpp
//  3.3
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int[]);
int main(){
    int a[] = {3, 8};
    swap(a);
    cout <<"返回后: a = " <<a[0] <<" b = " <<a[1] <<endl;
}
void swap(int a[]){
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;

    cout <<"交换为: a = " <<a[0] <<" b = " <<a[1] <<endl;
}
