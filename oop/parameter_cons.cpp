#include<iostream>
#include<vector>
using namespace std;

    class chai {
        public:
            string Teaname;
            int serving;
            vector<string> ingredients;

                //parameter constructor
            chai (string name , int serve , vector<string> ingr){
                // cout <<"Constructor Called" <<endl;
                Teaname = name;
                serving = serve;
                ingredients = ingr;
                cout <<" Param Constructor Called: ";
            }
                    //default Constructor
                    // constructor are more valuable when you are exploring c++ libraries frameworks etc.
             void displayChaiDetails()
            {
                cout << "Tea Name :" << Teaname << endl;
                cout << "Serving :" << serving << endl;
                cout << "Ingredients : ";
                for (string ingredient : ingredients)
                { // ye special loop h array ke liye
                    cout << ingredient << "";
                }
                cout << endl;
            }
    };

        // defaultChai.displayChaiDetails();
    int main (){
        
        chai lemontea (" lemon tea" , 2,{" Water" , " lemon" , " Honey"});
        lemontea.displayChaiDetails(); 

        return 0;
    }