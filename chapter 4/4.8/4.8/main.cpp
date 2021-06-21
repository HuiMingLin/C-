//
//  main.cpp
//  4.8
//
//  Created by 林惠铭 on 2020/3/21.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int = 0, int = 0);
    ~Point();
};
Point::Point(int a, int b):x(a),y(b) {
    cout <<"Initializing " <<a <<"," <<b <<endl;
}
Point::~Point(){
    cout <<"Destructor is active" <<endl;
}
int main(){
    Point *ptr = new Point[2];
    delete []ptr;
}
