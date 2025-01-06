#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int number, digit, totalDigits = 0, evenDigits = 0, oddDigits = 0;
    // Prompt user to input a number
    cout << "Enter a number: ";
    cin >> number;
    // Check if the number is negative, and make it positive if so
    if (number < 0) {
        number = -number;
    }
    // Use a while loop to extract and analyze each digit
    while (number > 0) {
        digit = number % 10;  
        totalDigits++;        
        
        if (digit % 2 == 0) {
            evenDigits++;     
        } else {
            oddDigits++;      
        }
        
        number = number / 10;  
    }
    // Output the results
    cout << "Total: " << totalDigits << endl;
    cout << "Even: " << evenDigits << endl;
    cout << "Odd: " << oddDigits << endl;
return 0;
}