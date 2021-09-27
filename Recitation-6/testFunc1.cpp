#include<iostream>
using namespace std;


int testingFunc(int);
// This is declaring a function 

int main()

{
int a = 6;
int result;

//Calling a function
result = testingFunc(a);

cout<<"The result is " << result <<endl; 
return 0;
}


// Below is the function definition
int testingFunc(int var)

{
    var = var + 10;
    return var;

}