#include <iostream>

using namespace std;

int main (int argc, char** argv) {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

/**
    cout << "Please input your favorite dessert:" << endl;
    // cin 以空白字符作为输入结束标志；
    // cin 会自动添加空字符在字符串末尾，遇到的空白字符（空格、换行）会留在输出队列里；
    cin >> dessert;
    cout << dessert << endl;
    cout << "Please input your name:" << endl;
    cin >> name;
    cout << name << endl;

*/


/*
    cout << "Please input your favorite dessert:" << endl;
    // cin 以空白字符作为输入结束标志；
    cin.getline(dessert, ArSize);
    cout << dessert << endl;
    cout << "Please input your name:" << endl;
    cin.getline(name, ArSize);
    cout << name << endl;

*/
    cout << "What year was your house buiult?\n";
    int year;
    cin >> year;
    cin.get();
    // (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done\n";

    return 0;


    /*
        1、cin 遇到换行符或空白符停止，取出前面所有字符并在末尾加0，换行符不被丢弃；
        2、cin.get() 遇到换行符直接读取；
        3、cin.getline() 遇到换行符丢弃，并保存为空白字符(\0)；
    */
}