#include<iostream>
using namespace std;

class Numbers{


    public:
        int product; 
        
        //constructor definition
        Numbers(){

            product = 1;
            cout<<"COnstructor called"<<endl;
    
        }
        
        int findProduct(int);

};





int Numbers::findProduct(int N){

    
    

    for (int i =1; i<= N; i++){
        
        product = product*i;
    }

    return product;
}





int main(){

    Numbers num;

    cout << "Value of product is " << num.product << endl;
    cout <<"The result of the operation is "<<num.findProduct(5)<<endl;


}