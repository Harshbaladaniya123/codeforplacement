#include<iostream>
using namespace std;

class Hero{
    
    private:
       int health;
       int level;

    public:
       int gethealth(){
           return health;
       }

       int getlevel(){
            return level;
       }

       void sethealth(int n){
            health=n;
       }

};

int main(){
  Hero ramesh;
  cout<<ramesh.gethealth()<<endl;
  ramesh.sethealth(10);
  cout<<ramesh.gethealth()<<endl;
}