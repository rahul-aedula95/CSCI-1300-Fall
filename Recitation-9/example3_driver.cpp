#include<iostream>
#include "example3.h"
using namespace std;

int main(){

    Numbers num(2);

    cout << "Value of product is " << num.product << endl;
    cout << "Value of constant is " << num.constant << endl;
    cout <<"The result of the operation is "<<num.findProduct(5)<<endl;


}