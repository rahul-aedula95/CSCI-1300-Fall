#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{



//seeding is required to replicate the analysis.
int randomNumber;
srand(time(NULL)); // This seeds the rand function.
randomNumber = rand() % 3; // This generates random numbers from 0 to 2. (3 is not included)
cout<<randomNumber<<endl;
return 0;
}
