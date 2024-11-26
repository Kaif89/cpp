#include <iostream>
using namespace std;

// Function with default parameter
void serveChai(string teaType = "Masala Tea") {
    cout << "Serving " << teaType << endl;
}

int main() {
    serveChai();               // Uses default parameter
    serveChai("Ice Tea");     // Uses actual parameter
    return 0;
}