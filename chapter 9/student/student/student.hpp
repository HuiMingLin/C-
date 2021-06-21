//
//  student.hpp
//  student
//
//  Created by 林惠铭 on 2020/4/6.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#if !defined(STUDENT_H)
#define STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
class student {
        string number;
        double score;
    public:
        void SetNum(string s) {
            number = s;
        }
        void Setscore(double s) {
            score = s;
        }
        string GetNum() {
            return number;
        }
        double GetScore() {
            return score;
        }
        void set(vector <student> &);
        void display(vector <student> &);
        void read();
};

#endif

