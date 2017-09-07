#include <iostream>
using namespace std;

enum color {
    red = 101,
    blue = 102,
    white = 103
};

void print_color (color c) {
    cout << "Color is: " << c << endl;
}

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    
    typedef int newint;
    
    newint x = 1;
    cout << x << endl;
    
    color instance = red;
    print_color(instance);

    return 0;
}
