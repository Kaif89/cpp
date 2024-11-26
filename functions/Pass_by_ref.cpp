#include <iostream>
using namespace std;

void refillChai(int &cups) {  // Pass by reference
    cups += 0;
    cout << "Refilled to " << cups << " cups of chai!" << endl;
}

int main() {
    int chaiCups = 3;
    refillChai(chaiCups);  // Passing by reference
    cout << "Total chai cups now: " << chaiCups << endl;
    return 0;
}