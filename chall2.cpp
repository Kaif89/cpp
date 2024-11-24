
#include <iostream>

using namespace std;

// Function to calculate the new tea price
double calculateNewPrice(double basePrice) {
    // Increase the price by 10%
    double newPrice = basePrice * 1.10;

    // Manually round to 2 decimal places
    int roundedPrice = static_cast<int>(newPrice * 100 + 0.5); // Round to nearest whole number
    return roundedPrice / 100.0; // Convert back to double with 2 decimal places
}

int main() {
    double basePrice;

    // Input base price from user
    cout << "Please enter the base price for tea: ";
    cin >> basePrice;

    // Check if the input is valid
    if (cin.fail()) {
        cout << "Invalid input! Please enter a numeric value." << endl;
        return 1; // Exit with error code
    }

    // Calculate the new price
    double newPrice = calculateNewPrice(basePrice);

    // Display the rounded new price
    cout << "The new price for tea after a 10% increase is: $" << newPrice << endl;

    return 0; // Successful execution
}