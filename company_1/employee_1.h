//
// Created by 86138 on 2024/9/15.
//

#ifndef COMPANY_1_EMPLOYEE_1_H//防止重复定义
#define COMPANY_1_EMPLOYEE_1_H

#include <string>

using namespace std;

class Employee {
public:
    //Post condition: this employee's name has been  set to "
    //               and gross pay to 0.00.
    Employee();

    //Post condition: true has been returned is this Employee is the
    //                sentinel.Otherwise,false has been returned.
    bool isSentinel() const;

    //Post condition: The name and the gross pay have been read in.
    void readInto();

    //Post condition: The Employee's name and gross pay hava been written out
    void printOut() const;

    //Post condition: this Employee contains a copy of other Employees
    void getCopyOf(const Employee &otherEmployee);

    //Post condition: true has been returned if this Employee's pay is
    //                greater than that of otherEmployee.
    //                Otherwise.false has been returned.
    bool makesMoreThan(const Employee &otherEmployee) const;

private:
    string name;
    double grossPay;

    const static double GROSS_PAY_SENTINEL;
    const static string EMPTY_STRING;
    const static string NAME_SENTINEL;
};

#endif //COMPANY_1_EMPLOYEE_1_H
