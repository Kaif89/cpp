#include<iostream>
using namespace std;

    int main () {

        int chaiTemp[5] = {85, 90 , 28 , 22 , 11};

        cout << "Chai Temps :";

        for (int i = 1  ; i <= 5  ; i++ ) {

            cout << chaiTemp[i] << " degree C \n";
        }


        return 0;
    }