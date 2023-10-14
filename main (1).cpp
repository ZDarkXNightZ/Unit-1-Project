#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    double mp1, mp2, mp3, mo1, mo2, mo3, mc1, mc2, mc3;
    int ms1, ms2, ms3, totalc;
    double totalm, totals, totalavg;

    // Display ASCII art
    cout << "______________           ______ ________              _____    \n";
    cout << "___  __ )__  /______________  /____  __ )___  __________  /_____________\n";
    cout << "__  __  |_  /_  __ \\  ___/_  //_/_  __  |  / / /_  ___/  __/  _ \\_  ___/\n";
    cout << "_  /_/ /_  / / /_/ / /__ _  ,<  _  /_/ // /_/ /_(__  )/ /_ /  __/  /  \n";
    cout << "/_____/ /_/  \\____/\\___/ /_/|_| /_____/ \\__,_/ /____/ \\__/ \\___//_/ \n";

    // Blank line for spacing
    cout << " \n";

    // Welcome message
    cout << "Welcome to Blockbuster!\n";

    // Blank line for spacing
    cout << " \n";

    // Input movie prices and quantities
    cout << "What is the price of Dances with Muskrats?" << endl;
    cin >> mp1;

    cout << "How many copies of Dances with Muskrats does the store hold?" << endl;
    cin >> ms1;

    cout << "What is the price of The Mighty Dentists" << endl;
    cin >> mp2;

    cout << "How many copies of The Mighty Dentists does the store hold?" << endl;
    cin >> ms2;

    cout << "What is the price of While You Were Snoring?" << endl;
    cin >> mp3;

    cout << "How many copies of While You Were Snoring does the store hold?" << endl;
    cin >> ms3;

    // Calculate totals
    totalm = mp1 + mp2 + mp3;
    totalc = ms1 + ms2 + ms3;
    totals = mp1 * ms1 + mp2 * ms2 + mp3 * ms3;
    totalavg = totalm / 3;
    mo1 = mp1 * 0.10;
    mo2 = mp2 * 0.10;
    mo3 = mp3 * 0.10;
    mc1 = mo1 * 4;
    mc2 = mo2 * 4;
    mc3 = mo3 * 4;

    // Display header for movie information
    cout << left << setw(25) << "Movie title" << setw(15) << "Price" << setw(20) << "Amount in Stock" << setw(21) << "Rent for a day" << "Rent for a week" << endl;
    cout << "________________________________________________________________________________________________" << endl;

    // Display details for each movie
    cout << left << setw(25) << "Dances with Muskrats" << setw(15) << mp1 << setw(3) << ms1 << setw(17) << " DVDs" << "$" << setw(20) << mo1 << "$" << mc1 << endl;
    cout << " \n";

    cout << left << setw(25) << "The Mighty Dentists" << setw(15) << mp2 << setw(3) << ms2 << setw(17) << " DVDs" << "$" << setw(20) << mo2 << "$" << mc2 << endl;
    cout << " \n";

    cout << left << setw(25) << "While You Were Snoring" << setw(15) << mp3 << setw(3) << ms3 << setw(17) << " DVDs" << "$" << setw(20) << mo3 << "$" << mc3 << endl;
    cout << " \n";

    // Display total statistics
    cout << "The store is currently carrying: " << totalc << " DVDs\n";
    cout << " \n";
    cout << "The average price of a DVD is: $" << totalavg << endl;
    cout << " \n";
    cout << "To buy one of each of the DVDs it would cost: $" << totalm << endl;
    cout << " \n";
    cout << "The total price of all of the DVDs is: $" << totals << endl;

    return 0;
}
