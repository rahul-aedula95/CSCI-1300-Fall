#include<iostream>
using namespace std;
 
float interest(float p, float r, float t);
 
int main()
{
  float p, r,t;
  cout << "Enter the amount \n"<<endl;
  cin >> p;
  cout << "Enter the rate in % \n "<<endl;
  cin >> r;
 cout << "Enter the time in years \n"<<endl;
  cin >> t;

 cout << " The simple interest is "<<interest(p,r,t)<<endl;

return 0;
}

float interest(float p, float r, float t) {

    float simpleInterest;

    simpleInterest = (p*r*t)/100;

    return simpleInterest;
}   
