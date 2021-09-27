#include<iostream>
#include<vector>
using namespace std;
vector<int> testFunc(vector<int> v);



int main(){

    vector<int> v = {10,20,30,30};

    vector<int> result;

    result = testFunc(v);

    for (int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }


}


vector<int> testFunc(vector<int> v){

    for (int i=0;i<v.size();i++){
        v[i] = v[i] + 1;
    }

    return v;
}
