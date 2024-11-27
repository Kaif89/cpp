#include<iostream>
#include<vector>
using namespace std;

    class chai {
        public:
            string Teaname;
            int serving;
            vector<string> ingredients;

            chai (){
                // cout <<"Constructor Called" <<endl;
                Teaname ="Unkown Tea";
                serving = 1;
                ingredients = {"water ", "Tea Leaves "," Sugar" ," Ginger" };
                cout <<"Constructor Called";
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

    int main (){
        
        chai defaultChai;
        defaultChai.displayChaiDetails();

        return 0;
    }