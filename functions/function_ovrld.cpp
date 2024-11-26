#include <iostream>
using namespace std;

// Function overloading
void brewChai(int cups) {
    cout << "Brewing " << cups << " cups of chai." << endl;
}

void brewChai(string teaType) {
    cout << "Brewing " << teaType << "." << endl;
}

int main() {
    brewChai(3);             // Calls int version
    brewChai("Masala Chai");  // Calls string version
    return 0;
}


// Function overloading allows multiple functions with the same name but different parameter types or numbers.
// bas unke parameter different ho sakte aap unke data types bhi change kr sakte ho 