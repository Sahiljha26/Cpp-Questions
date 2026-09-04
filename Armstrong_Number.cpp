#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:\n";
    cin >> n;

    if (n < 0) {
        cout << "Not an Armstrong number\n";
        return 0;
    }

    if (n == 0) {
        cout << "Armstrong Number\n";
        return 0;
    }

    int temp = n;
    int count = 0;

    // Step 1: Count the total number of digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    // Step 2: Calculate the sum using a simple multiplication loop instead of pow()
    while (temp > 0) {
        int lastdigit = temp % 10;
        
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= lastdigit;
        }
        
        sum += p;
        temp /= 10;
    }

    cout << ((sum == n) ? "Armstrong Number\n" : "Not an Armstrong number\n");

    return 0;
}
