#include<iostream>
using namespace std;

void testFunc(int array[], int length);
void testFunc2(int var);

int main(){

    int length = 5;
    int arr[length] = {10,20,30,40,50};
    int var = 30;

    // calling testFunc 2 to show that other variables are unaffected
    testFunc2(var);
    cout << "Value of var " <<var<<endl;

    testFunc(arr, length);

        



    //  // first we will just attempt to print it
    // for(int i=0;i<length;i++){
    //     cout << arr[i] <<endl;

    // }




}


void testFunc(int array[], int length){

    // first we will just attempt to print it
    for(int i=0;i<length;i++){
        cout << array[i] <<endl;

    }


    // // we will attempt to modify it
    // for(int i=0;i<length;i++){
    //     array[i] = array[i] + 1;
        
    // }
}


void testFunc2(int var){

    var = 40;
}