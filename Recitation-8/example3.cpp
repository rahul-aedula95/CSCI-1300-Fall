#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ifstream fp;
    string var1;
    int num;

    fp.open("string-number.txt");

    if (!fp){
        cout<<"The file cannot be opened"<<endl;
        return 0;
    }

    while (fp>>var1>>num)
    {
        cout<<var1<<endl;
        cout<<num<<endl;
    
    }

    fp.close();
    return 0;
}