#include<iostream>
using namespace std;

tuple<int,int,int> extended_gcd(int a, int b) {
    if (b == 0)
        return {a, 1, 0}; // gcd, x, y
    auto [g, x1, y1] = extended_gcd(b, a % b);
    int x = y1;
    int y = x1 - (a / b) * y1;
    return {g, x, y};
}

int main() {
        int a, b;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    auto [g, x, y] = extended_gcd(a, b);

    cout << "gcd(" << a << ", " << b << ") = " << g << "\n";
    cout << "x = " << x << ", y = " << y << "\n";

    // Verify Bézout's identity
    cout << "Check: " << a << "*" << x << " + " << b << "*" << y
         << " = " << (a*x + b*y) << "\n";

    return 0;
}