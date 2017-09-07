//
//  main.cpp
//  basic
//
//  Created by Jason on 19/06/2017.
//  Copyright © 2017 Jason. All rights reserved.
//

#include <iostream>

using namespace std;

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << "" << b << '\n';
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << "" << *b << endl;
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
