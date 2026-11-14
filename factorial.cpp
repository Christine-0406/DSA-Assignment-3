
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number between 0 and 20.";
    } else {
        cout << "Factorial = " << factorial(n);
    }

    return 0;
}
    