#include <bits\stdc++.h>
using namespace std;
// This program illustrate using recursion to solve febonacci series
int series(int n){
   if( n == 0 | n == 1){
       return n;
   }
   return series(n-1) + series(n-2);
}

int main(){
    int n;
    cout<<"Enter any number to calculate factorial\n";
    cin>>n;
    cout<<"Value of "<<n<<" th Fibonacci is "<<series(n)<<"\n";
}