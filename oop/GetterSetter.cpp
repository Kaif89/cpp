#include<iostream>
#include<vector>
using namespace std;

    

        class chai{
            private:
                    string Teaname;
                    int Servings;
                    vector<string> ingredients;

            public:
                    chai(){
                        Teaname = "Unkown";
                        Servings = 1;
                        ingredients = {"Tea leaves" , " Water" ," Sugar"};
                    }
                    
                    chai(string name , int serve , vector<string> ingr){
                        Teaname = name;
                        Servings = serve;
                        ingredients = ingr;
                    }

                //Getter
                string getTeaname(){
                    return Teaname;
                }
                //setter
                void setTeaname(string name){
                    //logic
                    Teaname = name;
                }   

                // getter for serving
                int getServings(){
                    return Servings;
                }

                //setter for serving
                void setServings(int serve){
                    Servings = serve;
                }

                //getter for ingredients
                vector<string> getIngredients(){
                    return ingredients;
                }
                //setter for ingredients
                void setIngredients(vector<string> ingr){
                    ingredients = ingr;
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

        int main(){
            chai chai;
            chai.setTeaname("Ginger Tea");
            chai.setServings(3);
            chai.setIngredients({"Ginger ", "Milk ", "Sugar ", " Tea Leaves"});
            chai.displayChaiDetails();
            
            return 0;
        }

    