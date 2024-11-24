#include<iostream>

using namespace std;
int main(){

int cups;
bool IsStudent;

cout << "Are u a Student (1 for yes and 0 for No) ?";
cin >> IsStudent;
cout <<"how many cups of Tea  have u ordered ?";
cin >> cups;


if( IsStudent || cups >= 15){

    cout <<"You are elegible for a discount"<<endl;

}else{
    cout <<"You are Not  elegible for a discount"<<endl;

}

    return 0;
}
