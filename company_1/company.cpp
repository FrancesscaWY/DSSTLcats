#include <iostream>
#include "company.h"

Company::Company() {
    atLeastOneEmployee = false;
}

void Company::findBestPaid() {
    Employee employee;
    employee.readInto();
    if (!employee.isSentinel()) {
        atLeastOneEmployee = true;
        while (!employee.isSentinel()) {
            if (employee.makesMoreThan(bestPaid)) {
                bestPaid.getCopyOf(employee);
            }
            employee.readInto();
        }
    }
}

void Company::printBestPaid() const {
    const string Best_paid_message =
            "\n\n\nThe best-paid employee(and gross pay)";
    cout << Best_paid_message;
    bestPaid.printOut();
}

//
// Created by 86138 on 2024/9/15.
//
