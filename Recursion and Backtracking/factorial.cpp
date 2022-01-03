#include <bits\stdc++.h>
using namespace std;
// This program illustrate using recursion to solve recursion
int factorial(int n){
    // Base Condition
    if(n == 1){
        return 1;
    }
    // Next no factorial
    int nextNo = factorial(n - 1);
    int ans = n * nextNo;
    return ans;
}

int main(){
    int n;
    cout<<"Enter any number to calculate factorial\n";
    cin>>n;
    cout<<factorial(n)<<"\n";
    return 0;
}