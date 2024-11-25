#include<iostream>
#include<string>
using namespace std;

    int main(){

        string response;

            while (true){
                cout << "Do You Want More Tea (Type 'Stop' to exit )?: ";
                getline(cin,response);


                if(response == "stop"){
                    //exit the loop
                    break;
                }

                cout <<"Here is Your Another Cup Of Tea\n";   

            }

                    cout << "No More tea will be Served To You"<< endl;

        return 0;

    }