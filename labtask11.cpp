#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter their account number
    long long accountNumber;
    cout << "Enter your account number: ";
    cin >> accountNumber;

    // Validate if the account number is non-negative
    if (accountNumber < 0) {
        cout << "Invalid input! Please enter a positive account number." << endl;
        return 0;
    }

    long long reversedNumber = 0; // To store the reversed number
    int digitSum = 0;             // To store the sum of the digits

    // While loop to reverse the digits and calculate the sum
    while (accountNumber > 0) {
        int digit = accountNumber % 10;           // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        digitSum += digit;                        // Add the digit to the sum
        accountNumber /= 10;                      // Remove the last digit
    }

    // Display the results
    cout << "Reversed Account Number: " << reversedNumber << endl;
    cout << "Sum of Digits: " << digitSum << endl;

return 0;
}