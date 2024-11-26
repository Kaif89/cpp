// returnType functionName(parameters) {
//     // function body
// }


#include <iostream>
using namespace std;

// Function to check tea temperature
int checkTeaTemperature(int temperature) {
    return temperature;
}

int main() {
    int temp = checkTeaTemperature(85);  // Function call
    cout << "The tea temperature is " << temp << "°C" << endl;
    return 0;
}