#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Prompt the user to input the range
    cout << "Enter the starting number of the range (a): ";
    cin >> a;
    cout << "Enter the ending number of the range (b): ";
    cin >> b;

    // Calculate the midpoint of the range
    int midpoint = (a + b) / 2;

    cout << "\nAnalyzing numbers in the range [" << a << ", " << b << "] with midpoint " << midpoint << ":\n";

    // Iterate through the range using a while loop
    int main= a;
    while (main <= b) {
        if( main< midpoint) {
            cout << main << " is LESS than the midpoint." << endl;
        } else if (main > midpoint) {
            cout << main << " is GREATER than the midpoint." << endl;
        } else {
            cout << main << " is EQUAL to the midpoint." << endl;
        }
        main++;
    }

return 0;
}