#include <iostream>
using namespace std;

void pourChai(int cups) {  //(the cups is also called placeholder or parameters)
    cups = cups + 5;  // Modifies local copy
    cout << "Poured " << cups << " cups of chai!" << endl;
}

int main() {
    int chaiCups = 1;
    pourChai(chaiCups);  // Passing by value
    cout << "Total Tea Cups outside function: " << chaiCups << endl;
    return 0;
}