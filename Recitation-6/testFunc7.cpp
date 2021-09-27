#include<iostream>
using namespace std;

// Below is the function definition
void testingFunc(int var[], int arraySize)

{
   
    for(int i = 0; i <arraySize; i++){
        var[i] = var[i] + 1;
    }
    
    int arr[3] = {80,90,100};

}
int main()

{
int arr[5] = {10,20,30,40,50};
int result;

//Calling a function
testingFunc(arr, 5);



for(int i = 0; i <5; i++){
    cout<<arr[i]<<endl;
}


}
