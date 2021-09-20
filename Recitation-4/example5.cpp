#include<iostream>

using namespace std;

int main(){


    int temp; 

    cout <<"What is the temperature?"<<endl;

    cin >> temp;

    if(temp>=90){
        cout<<"It is hot outside"<<endl;

    }

    else if(temp >65 && temp <90){
        cout << "It is pleasant"<<endl;
    }

    else {
        cout<<"It is cold outside"<<endl;
    }

}