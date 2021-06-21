//
//  main.cpp
//  exercise_4.2
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Salary {
    protected:
        double basic;
        double hourlySalary;
        int hour;
        double commission;
    public:
        Salary(double b = 0, double hs = 0, int h = 0, double c = 0) {
            basic = b;
            hourlySalary = hs;
            hour = h;
            commission = c;
        };
        void SetHsAndH(double hs, int h) {
            hourlySalary = hs;
            hour = h;
        }
        void SetCommission(double c) {
            commission = c;
        }
        double getSalary() {
            double total = basic + hourlySalary * hour;
            return total + total * commission;
        }
        void print() {
            cout <<"基本工资: " <<basic <<", "
                 <<endl
                 <<"计时工资: " <<hourlySalary <<"元/" <<hour <<"小时"
                 <<endl
                 <<"提成: " <<commission * 100 <<"%"
                 <<endl
                 <<"总工资: " <<getSalary() <<""
                 <<endl;
        }
};
class Manager:public Salary {
    public:
        Manager(double b):Salary(b){};
};
int main() {
    Manager manager1(8000);
    manager1.print();

    Manager manager2(0);
    manager2.SetHsAndH(100, 8);
    manager2.print();

    Manager manager3(0);
    manager3.SetCommission(0.05);
    manager3.print();

    Manager manager4(0);
    manager4.SetCommission(0.04);
    manager4.print();
}
