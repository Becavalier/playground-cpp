//
//  main.cpp
//  helloword
//
//  Created by Jason on 17/06/2017.
//  Copyright © 2017 Jason. All rights reserved.
//

#include <iostream>
#include <climits>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a{100};
    float x = 1213123123123123;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << x << a << endl;
    return 0;
}
