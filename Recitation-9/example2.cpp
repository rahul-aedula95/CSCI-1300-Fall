#include<iostream>
using namespace std;

class Numbers{


    public:
        int product;
        int constant; 
        
        //constructor definition
        Numbers(int c){

            product = 1;
            constant = c;
            
    
        }
        
        int findProduct(int);

};





int Numbers::findProduct(int N){

    
    

    for (int i =1; i<= N; i++){
        
        product = product*i;
    }

    return product*constant;
}





int main(){

    Numbers num(2);

    cout << "Value of product is " << num.product << endl;
    cout << "Value of constant is " << num.constant << endl;
    cout <<"The result of the operation is "<<num.findProduct(5)<<endl;


}