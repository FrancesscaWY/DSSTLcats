//
// Created by 86138 on 2024/9/15.
//

#ifndef COMPANY_1_COMPANY_H
#define COMPANY_1_COMPANY_H
#include "employee_1.h"
class Company
{
public:
    //Post condition:this company has been initialized.
    Company( );
    //Post condition:The employee with the highest gross pay has been determined.
    void findBestPaid();
    //Post condition:The best-paid employee in the put has been printed.
    void printBestPaid()const;
private:
    Employee bestPaid;
    bool atLeastOneEmployee;
};
#endif //COMPANY_1_COMPANY_H
