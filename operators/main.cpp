#include<iostream>

using namespace std;
int main(){

int cups;
double PricePerCup, TotalPrice, discountedPrice;

cout<<"enter number of cups: ";
cin>>cups;

cout<<"enter price per cup: ";
cin>>PricePerCup;

//arthematic op

TotalPrice = cups * PricePerCup;

//apply 5% discount if total price is above 100

if (TotalPrice > 100) {
    discountedPrice = TotalPrice - (TotalPrice * 0.05);
    cout<<"discounted price is :" <<discountedPrice<<endl; 

} else {
    cout<<"total price is :" << TotalPrice<< endl;
}

    return 0;
}