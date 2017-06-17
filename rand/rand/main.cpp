//
//  main.cpp
//  rand
//
//  Created by Jason on 17/06/2017.
//  Copyright © 2017 Jason. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    // 设置 rand() 产生随机数时的随机数种子；
    srand((unsigned) time(NULL));
    
    for (int i = 0; i < 100; i++) {
        // 单独使用 rand() 产生的是伪随机数，每次重新运行程序产生的随机数都相同，默认的随机数种子是1；
        cout << rand() % 10 << endl;
    }
    
    return 0;
}
