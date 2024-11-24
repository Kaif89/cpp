#include<iostream>

using namespace std;
int main(){

int cups;
cout<<"enter the number of cups you have :";
cin>>cups;

if (cups >20){
    cout<<"you will get a GOLD BADGE"<<endl;
}else if (cups >= 10 && cups < 20){
    cout<<"you will get a SILVER BADGE"<<endl;


    }else{
        cout<<"NO BADGE FOR U"<<endl;
    }

    


    return 0;
}
