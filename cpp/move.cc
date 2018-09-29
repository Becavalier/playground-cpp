#include <iostream>

using namespace std;

class HugeMem {
 public:
    HugeMem(int size) : sz(size > 0 ? size: 1) {
        c = new int[sz];
    }
    ~HugeMem() {
        delete [] c;
    }
    HugeMem(HugeMem &&hm) : sz(hm.sz), c(hm.c) {
        hm.c = nullptr;
    }

    int *c;
    int sz;
};

class Moveable {
 public:
    Moveable() : i(new int(3)), h(1024) {}
    ~Moveable() {
        delete i;
    }
    // 移动构造函数，直接使用临时右值；
    Moveable(Moveable &&m) : i(m.i), h(move(m.h)) {
        m.i = nullptr;
    }
    int *i;
    HugeMem h;
};

Moveable GetTemp() {
    Moveable tmp = Moveable();
    cout << hex << "Huge Mem from " << __func__  << " @" << tmp.h.c << endl;
    return tmp;
}

int main (int argc, char **argv) {
    Moveable a(GetTemp());
    cout << hex << "Huge Mem from " << __func__  << " @" << a.h.c << endl;
    return 0;   
}
