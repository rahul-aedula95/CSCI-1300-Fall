#include<iostream>

#include<vector>

using namespace std;

int main(){

    vector<int> v = {10,20,30,40};

    // notice we are using the size built in function to determine the size of the vector
    for (int i=0; i< v.size(); i++){ 

        cout<<v[i]<<endl;
    }


    cout<<"The size is "<< v.size()<<endl;

    v.clear();

    cout <<"The size after clearing is "<<v.size()<<endl;



}