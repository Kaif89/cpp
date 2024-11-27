#include<iostream>
#include<vector>
    using namespace std;

        class Bankaccount{
                private:
                    string AccountNumber;
                    double Balance;

                public:
                    Bankaccount(string accNum , double initialBalance){
                        AccountNumber = accNum;
                        Balance = initialBalance;
                    }
                    //getter
                    double Getbalance()const{
                        //cout to getbalance
                        cout << "Current acc balance" << Balance<<endl;
                        return Balance;  // this is also encapsulation
                    }

                    //method to deposit the money
                    void Deposit(double amount){
                        if(amount > 0){
                            Balance += amount;
                            cout <<"deposited :" <<amount<<endl;  // this is also a kind of encapsulation
                        }else{
                            cout << "Invalid deposit amount";
                        }
                    }

                    void Withdraw(double amount){
                        if(amount > 0 && amount <= Balance){
                            Balance -= amount;
                            cout << "Withdrawn : "<<amount<<endl;
                        }else{
                            cout << "Invalid withdrawn Amount"<< endl;
                        }
                    }

        };


                int main(){

                    Bankaccount myAccount("1222321", 500);

                    myAccount.Getbalance();
                    myAccount.Deposit(200);
                    myAccount.Withdraw(100);

                    return 0;
                }