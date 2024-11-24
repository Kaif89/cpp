#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    //string

    cout << "What would you like to order in teoa? \n";
    getline(cin, userTea);

    //ask for quantity
    cout << "How many cups of " << userTea << " would you like to have? ";
    cin >> teaQuantity;

    cout << "whoah! " << teaQuantity 
    << " cups of  " << userTea 
    << "? Are you planning to open a tea shop or just REALLY love tea?" << endl;

    cout << "Alright, coming right up! Stay tuned for the world's best " 
         << userTea << ", made with extra love (and sugar!).\n" << endl;



    return 0;
}