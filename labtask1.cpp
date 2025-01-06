#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reversedNumber = 0, sumOfDigits = 0;
     // Simplified while loop to reverse the number and calculate the sum of digits
    while (number > 0) {
        int digit = number % 10;  // Extract last digit
        reversedNumber = reversedNumber * 10 + digit;  // Build reversed number
        sumOfDigits += digit;  // Add digit to sum
        number /= 10;  // Remove last digit
    }
    cout << "Reversed number: " << reversedNumber << endl;
    cout << "Sum of digits: " << sumOfDigits << endl;
return 0;
}