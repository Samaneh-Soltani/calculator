#include <iostream>
#include <string>
using namespace std;
long long calculate(const string& op, long long a, long long b) {
    if (op == "add") return a + b;
    if (op == "sub") return a - b;
    if (op == "mul") return a * b;
    if (op == "div" && b!= 0) return a / b;
    return 0;
}

int main() {
    string op;
    long long a, b;
    cin >> op >> a >> b;
    cout << calculate(op, a, b) << endl;
    return 0;
}
