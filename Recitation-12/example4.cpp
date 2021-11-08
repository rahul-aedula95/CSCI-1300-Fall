#include<iostream>

#include<vector>

using namespace std;

int main(){

    vector<int> v = {10,20,30,40};


    // let us add new values 50 to this vector

    // the values will get added to the end of the vector

    v.push_back(50);
    
    for (int i=0; i< v.size(); i++){ 

        cout<<v[i] << endl;
    }


    // if you want to remove the last element 

    v.pop_back();

    cout << "output after deleting" <<endl;

    for (int i=0; i< v.size(); i++){ 

        cout<<v[i]<<endl;
    }




}