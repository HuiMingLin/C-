//
//  main.cpp
//  exercise_5.1
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        float score;
    public:
        Student() {
            
        }
        Student(string n, float s) {
            name = n;
            score = s;
        }
        string getName() {
            return name;
        }
        float getScore() {
            return score;
        }
};

int main(int argc, const char * argv[]) {
    Student s1("liming", 98);
    Student s2("sdfh", 90);
    Student s3("vn.fy", 80);
    Student s4("cnbtrt", 70);
    Student s5("ryuety", 48);
    cout.width(15);
    cout <<left <<"姓名" <<right <<"分数" <<endl;
    cout.width(15);
    cout <<left <<s1.getName() <<right <<s1.getScore() <<endl;
    cout.width(15);
    cout <<left <<s2.getName() <<right <<s2.getScore() <<endl;
    cout.width(15);
    cout <<left <<s3.getName() <<right <<s3.getScore() <<endl;
    cout.width(15);
    cout <<left <<s4.getName() <<right <<s4.getScore() <<endl;
    cout.width(15);
    cout <<left <<s5.getName() <<right <<s5.getScore() <<endl;
}
