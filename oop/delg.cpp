#include<iostream>
#include<vector>
    using namespace std;

    class chai{
            public:
                string Teaname;
                int Servings;
                vector<string> ingredients;


                //deligation constructor
                chai(string name) :chai(name, 1, {"Water ","Tea leaves" }){}

                // main cons
                chai(string name, int serve, vector<string> ingr){
                    Teaname = name; 
                    Servings = serve;
                    ingredients = ingr;
                    cout << " Main constructor  called!" << endl;
                }

                 void displayChaiDetails()
                {
                    cout << "Tea Name :" << Teaname << endl;
                    cout << "Serving :" << Servings << endl;
                    cout << "Ingredients : ";
                    for (string ingredient : ingredients)
                    { // ye special loop h array ke liye
                        cout << ingredient << "";
                    }
                    cout << endl;
                }

    };

    int main() {
        chai quickChai("Quick chai");
        quickChai.displayChaiDetails();
        return 0;
    }       