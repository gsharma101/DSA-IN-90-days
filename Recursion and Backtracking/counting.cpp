#include <bits\stdc++.h>
using namespace std;
// This program illustrate using recursion to print counting
int count(int n){
    if(n < 1){
        return -1;
    }
  count(n-1);
  cout<<n<<'\n';
}

int main(){
    int n,result;
    cout<<"Enter any number\n";
    cin>>n;
    count(n);
    return 0;
}