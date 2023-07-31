#include<iostream>
using namespace std;

class Human{

    public:
    int health; 

    void fun(){
        cout<<"called a function";
    }
};

class Ramesh : public Human {
    
};

int main(){
   Ramesh h1;
   h1.health = 10;
   cout<<h1.health;

}