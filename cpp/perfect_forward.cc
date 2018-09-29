#include <iostream>

using namespace std;

template <typename T, typename U>
// 引用折叠；
/*
    模版类型       入参类型       实际类型
    T&            TR            A&
    T&            TR&           A&
    T&            TR&&          A&
    T&&           TR            A&&
    T&&           TR&           A&
    T&&           TR&&          A&&
*/
void PerfectForward(T &&t, U& Func) {
    cout << t << "\tforwarded..." << endl;
    // to &&, like "move";
    Func(forward<T>(t));
}
void RunCode(double &&m) {}
void RunHome(double &&h) {}
void RunComp(double &&c) {}

int main (int argc, char **argv) {
    PerfectForward(1.5, RunComp);
    PerfectForward(8, RunCode);
    PerfectForward(1.5, RunHome);
    return 0;
}
