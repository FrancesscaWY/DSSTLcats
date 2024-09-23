#include <iostream>
#include "Linked.h"
using namespace std;
int main(){
    Linked<int> intLink;
    intLink.push_front(2);
    intLink.push_front(3);
    intLink.push_front(1);
    cout << "The size of intLink is "
            << intLink.getSize() << endl;
    return 0;
}
//
// Created by 86138 on 2024/9/21.
//
