#include<iostream>
#include<string>
    using namespace std;

        class Tea { //virtual function is a member function that expect to be a redefined in derived class
                public: // pure virtual function
                     virtual void prepareIngredients() = 0; // pure virtual function  // abstract class
                     virtual void brew() = 0; // pure virtual function
                     virtual void serve() = 0; // pure virtual function

                     void makeTea(){
                        prepareIngredients();
                        brew();
                        serve();
                     }
                    
        };

        //derived class

        class Greentea : public Tea{
                public:
                    void prepareIngredients() override {
                        cout << "Green Leaves and Water is Ready" <<endl;
                    }

                    void brew() override {
                        cout << "Green Tea brewed" <<endl;
                    }

                    void serve() override {
                        cout << "Green Tea Served" <<endl;
                    }
        };


         class Masalatea : public Tea{
                public:
                    void prepareIngredients() override {
                        cout << "Tea Leaves and Water is Ready Along with masala." <<endl;
                    }

                    void brew() override {
                        cout << "Masala Tea brewed" <<endl;
                    }

                    void serve() override {
                        cout << "Masala Tea Served" <<endl;
                    }
        };  // is tarah se kaam krne se informity aati h

        int main (){

            Greentea greentea;
            Masalatea masalatea;

            greentea.makeTea();  // virtual function kya h dekho khud se
            masalatea.makeTea();

            return 0;
        }