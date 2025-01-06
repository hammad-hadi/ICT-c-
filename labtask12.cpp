#include <iostream>
using namespace std;

int main() {
    string adminEmail = "admin@uni.com";
    string adminPassword = "admin";
    string adminclaimedEmail;
    string adminclaimedpassword;

    string programs[3] = { "Computer Science", "Business", "Engineering" };
    int maxSeats[3] = { 2, 2, 2 };
    float minEligibility[3] = { 80.0, 75.0, 70.0 };

    string studentName, studentEmail, studentProgram;
    float studentPercentage;

    cout << "Uni Management System" << endl;
    cout << "1 Admin login " << endl;
    cout << "2 Apply as a Student" << endl;
    int choice;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Admin Email = ";
        cin >> adminclaimedEmail;
        cout << "Admin Password = ";
        cin >> adminclaimedpassword;
        if (adminclaimedEmail == adminEmail && adminclaimedpassword == adminPassword) {
            cout << "Admin login Successful\n";
            cout << "Available Programs:" << endl;
            cout << "1. Computer Science (Max Seats: " << maxSeats[0] << ", Min Eligibility: " << minEligibility[0] << "%)" << endl;
            cout << "2. Business (Max Seats: " << maxSeats[1] << ", Min Eligibility: " << minEligibility[1] << "%)" << endl;
            cout << "3. Engineering (Max Seats: " << maxSeats[2] << ", Min Eligibility: " << minEligibility[2] << "%)" << endl;
        } else {
            cout << "Admin login failed\n";
        }
    }
    return 0;
}
    