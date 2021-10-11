#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ifstream fp;
    string var1;

    fp.open("testread.txt");

    if (!fp){
        cout<<"The file cannot be opened"<<endl;
        return 0;
    }

    while (fp>>var1)
    {
        cout<<var1<<endl;
    }

    fp.close();
    return 0;
}