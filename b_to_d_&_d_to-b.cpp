#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << n % 2; // Prints bits in correct order (no reversal needed)
}

int main() {
    int decimal = 10;
    cout << "Binary: ";
    if (decimal == 0) cout << "0"; // Edge case
    else decimalToBinary(decimal);
    return 0;
}
