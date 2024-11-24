#include<iostream>
using namespace std;

int main(){

  int hour;

    cout <<"Enter Current Hour (0-23) :";
    cin>>hour;

    if(hour>=8 && hour<=18){
        cout<<" TeaShop Is Open";
    }
    else{
        cout<<" Tea Shop Is Closed";
    }



    return 0;
}