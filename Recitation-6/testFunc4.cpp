#include<iostream>
using namespace std;


//function declaration
int testingFunc(int);

int main()

{
int a = 7;
int result=20;

//Calling a function
result = testingFunc(a);

cout<<"The result is " << result <<endl; 


return 0;
}


// Below is the function definition
int testingFunc(int var)
{
    int result;   
    if (var > 5 && var < 9)
    {
         
        result = var + 20;
        return result;
    }
    else
    {
        
        cout << "\n Does not matter " <<  endl;
        return 0;
        
    }
    
}
