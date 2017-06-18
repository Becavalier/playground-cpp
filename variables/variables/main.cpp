//
//  main.cpp
//  variables
//
//  Created by Jason on 18/06/2017.
//  Copyright © 2017 Jason. All rights reserved.
//

#include <iostream>
#define CONSTANT 100

const int x = CONSTANT;
static int k = 0;

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    std::cout << x << std::endl;
    
    for (int i = 0; i < 10; i++) {
        cout << k++ << endl;
    }
    return 0;
}
