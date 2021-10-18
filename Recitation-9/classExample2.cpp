#include<iostream>
#include<string>

using namespace std;


// !!!!! These are just examples you do not insert values into variables within the class itself unless it is being used that way


class Recitation{

    public:
        string name = "Rahul";

        void printValue(){

            cout << name << endl;
            cout << ssn << endl;
        }
    
    
    private:
        int ssn = 12345;
        

    


};



int main(){

Recitation student;

student.printValue();






}