#include <iostream>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    a %= c;
    b %= c;

    cout << (a + b) % c << '\n';
    cout << (a + b) % c << '\n';
    cout << (a * b) % c << '\n';
    cout << (a * b) % c << '\n';

    return 0;
}

/*
5 8 4
*/