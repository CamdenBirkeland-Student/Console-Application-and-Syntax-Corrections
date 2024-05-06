#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string firstName, lastName, streetAddress, city, zipCode;

    // Prompt user for information
    cout << "Enter first name: ";
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);

    cout << "Enter street address: ";
    getline(cin, streetAddress);

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter zip code: ";
    getline(cin, zipCode);

    // Print the information
    cout << "\n\nPrinting information for " << firstName << " " << lastName << ":\n";
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
