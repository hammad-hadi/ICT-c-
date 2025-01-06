#include <iostream>
using namespace std;

int main() {
    int x, range;
    // Prompt the user to input the number for the multiplication table
    cout << "Enter the number for which you want the multiplication table: ";
    cin >> x;
    // Prompt the user to specify the range
    cout << "Enter the range up to which you want the table (e.g., 20): ";
    cin >> range;
     // Validate the range
    if (range < 1) {
        cout << "Invalid range! Please enter a number greater than or equal to 1." << endl;
        return 0; // Exit the program
    }
    // Display the multiplication table
    cout << "\nMultiplication Table for " << x << " up to " << range << ":" << endl;
    for (int i = 1; i <= range; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }
return 0;
}