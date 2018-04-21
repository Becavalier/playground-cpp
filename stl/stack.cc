#include<stack>
#include<iostream>

using namespace std;

int main(int argc, char *argv[]) {
    stack<int> st;

    for (int i = 0; i < 5; i++) {
      st.push(i * i);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    cout << st.size() << endl;
}
