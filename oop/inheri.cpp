#include<iostream>
#include<vector>
#include<string>

    using namespace std;

// base class
        class Tea{
            protected:
                string Teaname;
                int servings;

            public:
            Tea(string name,int serve): Teaname (name) , servings(serve){
                cout<<"Tea Constructor Called"<< Teaname<<endl;
            }

            virtual void brew ()const{ //abstract class
                cout << "Brewing"<< Teaname << "With Generic method"<<endl;

            }

             virtual void serve ()const{ //abstract class
                cout << "Serving"<< servings << "Cup of Tea With Generic method"<<endl;
             }
             
             virtual ~Tea(){
                    cout << "Tea destructor Called for"<< Teaname << endl;
             }
        };
        

        class greenTea : public Tea {
            public:
            greenTea(int serve): Tea("Green tea" , serve){ //constructor
                cout<<"Green Tea Constructor Called"<<endl; 
            } 
            void brew() const override{
                cout << "Brewing" << Teaname << "by steeping Green Tea Leaves"<<endl;
            }
            ~greenTea(){
                cout <<"Green Tea destructor called" << endl;
            }
        };

        class masalatea : public Tea{
                public:
                    masalatea(int serve) : Tea("Masala Tea",serve){
                        cout << "MasalaTea constructor Called" << endl;
                    }
                    void brew() const override final{
                cout << "Brewing" << Teaname << "With spices and Milk"<<endl;
                    }

                ~masalatea(){
                    cout<< "masala Tea destructor Called"<< endl;
                }
        };

        // class spicymasalaTea : public masalatea{
        //     public:
        //         void brew()const override { // ye error isliye show krra humne masala tea ke class mai 
        //         //line 51 brew wale override final key word use kr liya ab wo hume override nhi krne dega 
        //         //koi aur class se override krna padega final keyword isliye use hota h
        //             cout << "Brewing" << Teaname << "With spices and Milk"<<endl;
        //         }
        // }

        int main (){// hum pointer banare ho jo base class ko point krega auur hum usse object banayenge

            Tea* tea1 = new greenTea(2);
            Tea* tea2 = new masalatea(8);

            tea1->brew();// methods call krne ke liye ye use kr sakte ho
            tea1->serve();

            tea2->brew();
            tea2->serve();
            
            delete tea1;
            delete tea2;

            return 0;
        }