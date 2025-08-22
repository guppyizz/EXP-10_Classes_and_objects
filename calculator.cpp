#include <iostream>
using namespace std;

class calculator{
public:
    int sum(int a, int b) {
        return a + b;
    }
    int sub(int a, int b) {
        return a - b;
    }
};

int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    return a/b;
}


int main() {
    calculator calc;
    int x = 10, y = 5;
    cout << calc.sum(x, y) << "\n";
    cout << divi(x,y) << "\n";
    cout << calc.sub(x, y) << "\n";
    cout << mul(x, y) << "\n";
    
}
