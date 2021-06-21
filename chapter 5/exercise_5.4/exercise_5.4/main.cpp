//
//  main.cpp
//  exercise_5.4
//
//  Created by 林惠铭 on 2020/3/29.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Dog {
        static int dogs;
    public:
        Dog(){};
        void setDogs(int a) {
            dogs = a;
        }
        static int getDogs() {
            return dogs;
        }
};
int Dog::dogs = 25;
int main() {
    cout <<"Œ¥∂®“Â Dog ¿‡÷Æ«∞: x = " <<Dog::getDogs() <<endl;
    Dog a, b;
    cout <<"a ÷–µƒ x: " <<a.getDogs() <<endl;
    cout <<"b ÷–µƒ x: " <<b.getDogs() <<endl;
    a.setDogs(360);
    cout <<"∏¯∂‘œÛ a ÷–µƒ x …Ë÷√÷µ∫Û: " <<endl;
    cout <<"a ÷–µƒ x: " <<a.getDogs() <<endl;
    cout <<"b ÷–µƒ x: " <<b.getDogs() <<endl;
}

