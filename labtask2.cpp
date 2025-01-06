#include <iostream>
using namespace std;

int main() {
    int n; // Upper limit of the range
    // Prompt the user to input the range
    cout << "Enter the upper limit of the range (1 to n): ";
    cin >> n;
    // Validate that the input is positive
    if (n < 1) {
        cout << "Invalid input! Please enter a number greater than or equal to 1." << endl;
        return 0; // Exit the program
    }
    int evenCount = 0; // Counter for even numbers
    int oddCount = 0;  // Counter for odd numbers
    cout << "\nClassifying numbers as Even or Odd:" << endl;
    // Iterate through the range from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if the number is even
            cout << i << " is Even" << endl;
            evenCount++;
        } else { // Otherwise, it's odd
            cout << i << " is Odd" << endl;
            oddCount++;
        }
    }
    cout << "Total Even Numbers: " << evenCount << endl;
    cout << "Total Odd Numbers: " << oddCount << endl;

    return 0; 
}