//
//  main.cpp
//  2.2
//
//  Created by 林惠铭 on 2020/3/12.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
struct Point{
    private:
        double x, y;
    public:
        void Setxy(double a, double b) {
            x = a;
            y = b;
        }
        void Display(){
            cout <<x <<"\t" <<y <<endl;
        }
};

int main(){
    Point a;
    a.Setxy(10.6, 18.5);
    a.Display();
    cout <<a.x <<"\t" <<a.y <<endl;
}

