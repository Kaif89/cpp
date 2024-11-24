#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    //string

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    //ask for quantity
    cout << "How many cups of " << userTea << " would you like to have? ";
    cin >> teaQuantity;

    cout << "You have ordered " << teaQuantity << " cups of " << userTea << "." << endl;

    return 0;
}