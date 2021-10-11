#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()

{

    string var1,var2,var3,var4,var5;
    ifstream file;

    file.open("column.txt");
    
    if (!file)
    {
        cout<<"Cannot open file"<<endl;
        return 0;
    }


    while(getline(file,var1,'.'))
    {
        getline(file,var2,'.');
        getline(file,var3,'.');
        getline(file,var4,'.');
        getline(file,var5);

        cout<<"var1 "<<var1<<endl;
        cout<<"var2 "<<var2<<endl;
        cout<<"var3 "<<var3<<endl;
        cout<<"var4 "<<var4<<endl;
        cout<<"var5 "<<var5<<endl;

    }
    return 0;
}