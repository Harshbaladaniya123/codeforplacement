#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }

    return fact;
}

int ncr(int n,int r){
   int a = fact(n);
   int b = fact(r)*fact(n-r);
   return a/b;
}

int main(){
    int n,r;
    cin>>n>>r;
    int result = ncr(n,r);
    cout<<result;
}