#include<iostream>
#include<string>
using namespace std;

    int main(){

        string TeaTypes[3] = {"Green Tea" , "Black Tea" , "Lemon Tea" };

        for (int i =0 ; i < 3 ; i++) {

            if (TeaTypes[i] == "Green Tea"){
                cout << "Green Tea is Not available :( \n";
                continue;
            }

            cout << "Brewing : " <<TeaTypes[i]<<"..."<<endl;

        }
        
        return 0;

    }