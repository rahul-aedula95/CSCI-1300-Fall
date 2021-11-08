#include <iostream>
using namespace std;

int fib(int x){

    int arr[20];
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i=2; i<=x; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];

    }

    return arr[x];



}





int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   

   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   cout<<""<<endl;
   return 0;

}