#include <iostream>
#include <iomanip>
#include "employee_1.h"

const double Employee::GROSS_PAY_SENTINEL = -1.0;
const string Employee::EMPTY_STRING = "";
const string Employee::NAME_SENTINEL= "*";

Employee::Employee(){
    name=EMPTY_STRING;
    grossPay=0.00;

}

bool Employee::isSentinel() const
{
    if(name==NAME_SENTINEL && grossPay == GROSS_PAY_SENTINEL){
        return true;
    }
    return false;
}

void Employee::readInto(){
    const string NAME_AND_PAY_PROMPT=
            "Please enter a name and gross pay;to quit,enter ";
    cout << NAME_AND_PAY_PROMPT << NAME_SENTINEL << " "
         << GROSS_PAY_SENTINEL << ": ";
    cin >> name >> grossPay;
}

void Employee::printOut() const{
     cout << "is " << name << " $" << setiosflags(ios::fixed)
          << setprecision(2) << grossPay << endl;
}

void Employee::getCopyOf(const Employee &otherEmployee)
{
    name  = otherEmployee.name;
    grossPay = otherEmployee.grossPay;
}

bool Employee::makesMoreThan(const Employee &otherEmployee)const
{
    return grossPay>otherEmployee.grossPay;
}
//
// Created by 86138 on 2024/9/15.
//
