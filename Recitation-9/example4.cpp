#include<iostream>
using namespace std;

class Constant{

    public:
        int c;
        Constant(int arg){
            c = arg;
            cout<<"This constructor is being invoked"<<endl;
        }

};




class Numbers{


    public:
        int product;
        Constant con; 
        
        //constructor definition
        // This is also the initializer list part
        Numbers(int cvalue):con(cvalue){

            product = 1;
            
            
    
        }
        
        int findProduct(int);

};





int Numbers::findProduct(int N){

    
    

    for (int i =1; i<= N; i++){
        
        product = product*i;
    }

    return product*con.c;
}





int main(){

    Numbers num(2);

    cout << "Value of product is " << num.product << endl;
    cout << "Value of constant is " << num.con.c << endl;
    cout <<"The result of the operation is "<<num.findProduct(5)<<endl;


}