#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = n;

    n=n/100;
    cout<<n<<endl;
    n=x-n*100;
    x=n;
    

    if(n<50){

    }
    else{
     n=n/50;
     cout<<n<<endl;;  
     n=x-n*50;
     cout<<n; 
  
    }


    
    
}