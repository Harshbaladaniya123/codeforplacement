#include<iostream>
using namespace std;

class Hero{
    
     public:
       int health;

       Hero(int health){
        this -> health = health;
         cout<<health<<endl;
       }
};

int main(){
       Hero ramesh(10);
       cout<<ramesh.health<<endl;

       Hero h(ramesh);
       cout<<h.health;
}