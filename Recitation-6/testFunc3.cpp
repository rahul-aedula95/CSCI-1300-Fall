#include<iostream>
using namespace std;

//function declaration
int testingFunc(int);

int main()

{
int a = 3;
int result;

//Calling a function
result = testingFunc(a);

cout<<"The result is " << result <<endl; 
}



// Below is the function definition
int testingFunc(int var)
{
    int result;   
    if (var > 5)
    {
         
        result = var + 20;
        return result;
    }
    else
    {
        
        result = var + 30;
        return result;
    }
    
}