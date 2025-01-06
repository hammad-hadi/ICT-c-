#include <iostream>
using namespace std;

int main() {
    int largest; 
    int num; 
    // Prompt to enter 5 numbers and find the largest one
    cout << "Please enter 5 numbers to determine the largest:" << endl;
    // Accept the first number to initialize the largest variable
    cin >> largest;
    // Loop to accept 4 more numbers
    for (int i = 1; i < 5; ++i) {
        cout << "Enter number " << i + 1 << ": "; // Prompt for each subsequent number
        cin >> num;

        // If-else block to keep track of the largest number
        if (num > largest) {
            largest = num; // Update largest if num is greater
        }
    }
    cout << "The largest number entered is: " << largest << "." << endl;
return 0;
}