#include<iostream>
#include<vector>

    using namespace std;


        class chai {
        public:
            // data members (attributes)
            string TeaName;             // name of the tea
            int serving;                // num of servings
            vector<string> ingredients; // list of ingredients of Tea // class ke andar jinte bhi variables hote hai unhe hi attributes bolte h

            // member function

            void displayChaiDetails()
            {
                cout << "Tea Name :" << TeaName << endl;
                cout << "Serving :" << serving << endl;
                cout << "Ingredients : ";
                for (string ingredient : ingredients)
                { // ye special loop h array ke liye
                    cout << ingredient << "";
                }
                cout << endl;
            }
            
        };

     

        int main () {

           chai chaione;    

           chaione.TeaName = "Lemon tea";
           chaione.serving = 2;
           chaione.ingredients = {"Tea leaves ." , "Water ." ,"Lemon ." , "Elaichi..."};
           
                chaione.displayChaiDetails();

                    chai chaiTwo;
                    chaiTwo.TeaName = "Ice Tea :";
                    chaiTwo.serving = 4;
                    chaiTwo.ingredients = {"tea .", "Cold Water ." ,"Sugar ." , "Ice Tea Powder..." };

                    chaiTwo.displayChaiDetails();

            return 0;
        }