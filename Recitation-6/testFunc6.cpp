#include<iostream>
using namespace std;


int main()

{
int arr[5] = {10,20,30,40,50};
int result;

//Calling a function
testingFunc(arr, 5);


}

// Below is the function definition
void testingFunc(int var[], int arraySize)

{
   
    for(int i = 0; i <arraySize; i++){
        cout<<var[i]<<endl;
    }
    

}