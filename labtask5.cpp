#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to input a batch number
    cout << "Enter the batch number to check its validity: ";
    cin >> n;

    int sum = 0;
    int workingNumber = n; // Renamed from temp to workingNumber

    // Calculate the sum of digits using a while loop
    while (workingNumber > 0) {
        sum += workingNumber % 10;
        workingNumber /= 10;
    }
    // Print the sum of the digits
    cout << "Sum of the digits: " << sum << endl;
    // Check if the sum is divisible by 3
    if (sum % 3 == 0) {
        cout << "Sum is divisible by 3" << endl;
    } else {
        cout << "Sum is not divisible by 3" << endl;
    }
return 0;
}