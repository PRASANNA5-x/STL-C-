#include<iostream>
using namespace std;

class MyFunctor {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    MyFunctor fun;
    cout << fun(5, 3) << endl; // Output: 1
    return 0;
}