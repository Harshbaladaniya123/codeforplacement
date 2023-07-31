#include<iostream>
using namespace std;

int main(){
    int n = 1;
    char ch = '1';

    switch(n){
        case 2 : cout<<"sum of two number";
                 break;
        case 1 : switch(ch){
              case '1' : cout<<"into switch statement";
                    break;
        }
        cout<<endl;
        default : cout<<"default";          
    }

}