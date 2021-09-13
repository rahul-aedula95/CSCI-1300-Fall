#include<iostream>

using namespace std;

int main(){

    // Let us create some variables.

    int a = 10;

    // if you want to change the value of a
    
    a = 20;


    cout<<"The value of a is "<< a <<endl;
    
    // let us now add an integer value 

    a = a + 50;

    cout<<"The value of a is "<< a <<endl;


    // We can also store the final values in different variables

    int sum;

    sum = a + 80;

    cout<<"The value of sum is "<< sum <<endl;
    

    // we can also add two variables with different values

    int b = 10;

    sum = a + b;

    cout<<"The value of sum is "<< sum <<endl;


    // // we can also do the same thing with different data type


    float x  = 2.5;
    float y = 3.7;

    float floatSum;

    floatSum = x + y;

    cout<<"The value of floatSum is "<< floatSum <<endl;





}