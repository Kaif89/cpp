#include <iostream>
using namespace std;

int globalChaiStock = 100;  // Global variable

void serveChai() {
    int localCups = 5;  // Local variable
    cout << "Serving " << localCups << " cups from " << globalChaiStock << " total stock." << endl;
}

int main() {
    serveChai();
    cout << "Global chai stock after serving: " << globalChaiStock << endl;
    return 0;
}    


// andar declare ki cheez bahar nhi aa sakti h 
// bahar declare ki gayi cheez kahi bhi aa sakti h usko kahi bhi acces kiya jaa sakta h
// global variable example =  int globalChaiStock = 100;  // Global variable
// local vairable mostly function ke andar declare hotA H  aur use bahar acces nhi kr sakte 