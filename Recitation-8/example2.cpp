#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{

    string var1 = "This string will be written";

    ofstream file;

    file.open("writtenFile.txt");

    file << var1; 
    file.close();

    return 0;
}