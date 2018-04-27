#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

    char array1[20];
    char array2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> array1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines: \n";
    cout << array1 << "    " << array2 << endl << str1 << "    " << str2 << endl;

    char first_date[] = {"Le Chapon Dobu"};
    string second_date[] = {"The Bread Bowl"};

    cout << str1.size();
    cout << str1 + str2 << endl;

    // getline
    string str3;
    // Discard '\n'
    cin.get();
    getline(cin, str3);
    cout << str3 << endl;

    // Raw string
    cout << R"+*("This is an apple.")+*" << endl;
    return 0;
}