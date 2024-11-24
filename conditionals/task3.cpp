#include<iostream>
using namespace std;

int main(){

    int cups;
    double PricePerCup =2.56 ,TotalPrice ,discount;

    cout<<"how many cups of tea you want :";
    cin>>cups;

    TotalPrice = PricePerCup * cups ;

    if(cups > 20){
        discount = 0.20;
    } else if(cups >=10 && cups <=20){
        
    } else{
        discount = 0;
    }

    TotalPrice -= (TotalPrice * discount);

    cout<<"Total Price after discount is : " << TotalPrice << endl;

    return 0;
}

