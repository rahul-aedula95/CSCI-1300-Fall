#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()

{

    string var1;
    ifstream file;

    file.open("testread.txt");
    
    if (!file)
    {
        cout<<"Cannot open file"<<endl;
        return 0;
    }


    while(getline(file,var1))
    {


        cout<<var1<<endl;


    }
    return 0;
}