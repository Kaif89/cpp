#include<iostream>
#include<vector>
using namespace std;

    class chai {
        public:
            string* Teaname;
            int serving;
            vector<string> ingredients;

                //parameter constructor
            chai (string name , int serve , vector<string> ingr){
                // cout <<"Constructor Called" <<endl;
                Teaname = new string(name);
                serving = serve;
                ingredients = ingr;
                cout <<" Param Constructor Called: ";
            }
                    //default Constructor
                    // constructor are more valuable when you are exploring c++ libraries frameworks etc.


            chai (const chai& other){
                Teaname = new string(*other.Teaname); // copy cons syntacx
                serving = other.serving;
                ingredients = other.ingredients;
                cout <<" Copy Constructor Called: ";

            }


        ~chai(){
                delete Teaname;
                cout << "Destructor called";
        }


             void displayChaiDetails()
            {
                cout << "Tea Name :" << *Teaname << endl;
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


        //copy the object 
        chai Copiedchai = lemontea;

        // chai Copiedchai = lemontea; // copy constructor called
        // Copiedchai.displayChaiDetails();

        // lemontea.displayChaiDetails(); 

        *lemontea.Teaname = "Modified Lemon tea";

        cout << "lemon tea------" << endl;
        lemontea.displayChaiDetails();
        cout << "copied lemon tea------" << endl;
        Copiedchai.displayChaiDetails();

        return 0;
    }