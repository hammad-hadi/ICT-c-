#include <iostream>
using namespace std;

int main() {
    int n;
    // Prompt the user to input a positive number
    cout << "Enter a positive number (n) to find numbers divisible by 3: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Please enter a number greater than 0." << endl;
    } else {
        int count = 0;
        cout << "Numbers divisible by 3 between 1 and " << n << " are:" << endl;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                cout << i << " ";
                ++count;
            }
        }
        // Display the total count of numbers divisible by 3
        cout << endl << "Total count of numbers divisible by 3: " << count << endl;
    }
return 0;
}