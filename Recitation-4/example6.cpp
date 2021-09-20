#include<iostream>
using namespace std;

int main(){

    int value;
    cout << "What is the value" << endl;
    cin >> value;

    switch(value){
        case 1:
        cout << "value is 1"<<endl;
        break;

        case 2:
        cout << " value is 2"<< endl;
        break;
        default:
        cout << "invalid"<<endl;
    
    }
}