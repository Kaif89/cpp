#include<iostream>
#include<string>
using namespace std;

    int main(){

         string response;
    
        do {
            cout << "Do You Want More Tea (Yes/No) :";
            getline(cin,response);

        } while (response != "No" );

        return 0;

    }