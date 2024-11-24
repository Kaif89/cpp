#include<iostream>
#include<string>
using namespace std;

int main(){

    string TeaOrder;

    cout<< "Enter Your Tea Order :";
    getline(cin , TeaOrder);

    if(TeaOrder == "Lemon Tea"){
    cout<< "you have ordered Lemon Tea"<<endl;
        
    }
    //  cout<< "you have ordered Lemon Tea"<<TeaOrder<<endl;

    return 0;
}