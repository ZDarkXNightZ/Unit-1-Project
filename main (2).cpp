#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Constants
    const double max = 75.0;  // Maximum discount percentage

    // Variables
    int mr, rr, ds;  // Number of movie rentals, number of referrals, and the calculated discount

    // Display ASCII art
    cout << "______________           ______ ________              _____    \n";
    cout << "___  __ )__  /______________  /____  __ )___  __________  /_____________\n";
    cout << "__  __  |_  /_  __ \\  ___/_  //_/_  __  |  / / /_  ___/  __/  _ \\_  ___/\n";
    cout << "_  /_/ /_  / / /_/ / /__ _  ,<  _  /_/ // /_/ /_(__  )/ /_ /  __/  /  \n";
    cout << "/_____/ /_/  \\____/\\___/ /_/|_| /_____/ \\__,_/ /____/ \\__/ \\___//_/ \n";

    // Display welcome message
    cout << " \n";
    cout << "Welcome to Blockbuster!\n";
    cout << " \n";

    // Input the number of movie rentals
    cout << "How many movies has the customer rented?" << endl;
    cin >> mr;

    // Input the number of referrals
    cout << "How many new customers has the customer referred us to?" << endl;
    cin >> rr;

    // Calculate the discount (sum of rentals and referrals)
    ds = mr + rr;

    // Ensure the discount doesn't exceed the maximum
    if (ds > max) {
        ds = max;  // Set the discount to the maximum if it exceeds the maximum
    }

    // Display the calculated discount
    cout << "\n";
    cout << "Your discount is: " << ds << "%" << endl;
}
