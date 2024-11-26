#include <iostream>
using namespace std;

int main() {
    // Lambda function to prepare chai
    auto prepareChai = [](int cups) {
        cout << "Preparing " << cups << " cups of chai." << endl;
    };

    prepareChai(2);  // Calling lambda function
    return 0;
}


//A lambda function is an anonymous function that can be defined inline using the [] syntax.
//They’re useful for short, simple functions