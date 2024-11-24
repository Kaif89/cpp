#include<iostream>
using namespace std;

int main(){

    int choice;
    double price;

    cout<<"Select Your Tea :\n";
    cout<<"1.Green Tea\n";
    cout<<"2.Lemon Tea\n";
    cout<<"3.Olong Tea\n";
    cout<<"Enter Your choice in Numbers\n";

    cin>>choice;

    switch (choice){
        case 1:
            price = 2.0;
            cout <<"You Selected Green Tea : $"<<price<<endl;
            break;
        case 2:
            price = 3.0;
            cout <<"You Selected Lemon Tea : $"<<price<<endl;
            break;
        case 3:
        price = 4.0;
            cout <<"You Selected Olong Tea : $"<<price<<endl;
            break;
        default:
        cout<<"Invalid Choice";
    }


   
    return 0;
}