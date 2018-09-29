#include <iostream>

using namespace std;

class A {
    int x = 10;
 public:
    A (int a) : x(a) {
        cout << "constructor A." << endl;
    }
    A (int a, int b) : x(a * b) {
        cout << "constructor A." << endl;
    }
    void getVal () const {
        cout << this->x << endl;
    }
};

class B : public A {
    using A::A;
 public:
    B (int b) : A(b) {
        cout << "constructor B." << endl;
    }
};

int main (int argc, char **argv) {
    /*
    shared_ptr<B> b(new B(20));
    shared_ptr<A> a = static_pointer_cast<A>(b);
    a->getVal();
    */

    shared_ptr<B> b(new B(20, 20));
    shared_ptr<A> a = static_pointer_cast<A>(b);
    a->getVal();

    return 0;
}
