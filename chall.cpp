#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string typeOfTea;
    float quantity = 1.6; 
    char teaRating;
    float teaPrice;


    cout << "What type of tea would you like to order? ";
    getline(cin, typeOfTea);




    cout << "Enter the price per kg of tea: ";
    while (!(cin >> teaPrice) || teaPrice < 0)
    {
        cout << "Invalid input. Please enter a valid price: ";
        cin.clear();                                         
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    cout << "Enter the quantity of tea you want to order (in kg): ";
    while (!(cin >> quantity) || quantity <= 0)
    {
        cout << "Invalid input. Please enter a valid quantity (greater than 0): ";
        cin.clear();                                         
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    float totalPrice = teaPrice * quantity;
    cout << "The total price for " << quantity << " kg of " << typeOfTea << " is: $" << totalPrice << endl;

    cout << "Please rate the tea (A, B, C, D, or F): ";
    cin >> teaRating;
    
        cout << "Thank you for rating the tea: " << teaRating << endl;
    
    return 0;
}