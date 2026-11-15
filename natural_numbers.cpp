
#include <iostream>
using namespace std;

// Recursive function
int sum(int n) {
    // Base case
    if (n == 0) {
        return 0;
    }

    // Recursive case
    return n + sum(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum = " << sum(n);

    return 0;
}
