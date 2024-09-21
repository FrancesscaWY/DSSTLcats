#include <iostream>
#include <string>
#include "company.h"
using namespace std;

int main() {
    const string Close_window_proMPT=
            "Please enter the Enter key to close this output window.";
    Company company;
    company.findBestPaid();
    company.printBestPaid();

    cout << endl << endl << Close_window_proMPT;
    cin.get();
    cin.get();
    return 0;
}
