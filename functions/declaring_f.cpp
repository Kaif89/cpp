#include <iostream>
using namespace std;

// Declaring the function (prototype)
void serveChai(int cups);

int main() {
    serveChai(3);  // Function call
    return 0;
}

// Function definition is done later
void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai!" << endl;
}