#include<iostream>
using namespace std;
    int main(){

        int TeaCups;

        cout<< "Enter The Number Of Tea Cups Would You Like To Order :";
        cin>>TeaCups;

        while (TeaCups > 0) {
            cout<<"Serving Cups Of Tea \n"<< TeaCups <<" :Remaining" <<endl;
            TeaCups --;
        }

        cout << "All Tea Cups Are Served :"<<endl;

    return 0;
}