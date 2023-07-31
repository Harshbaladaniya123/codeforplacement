#include<iostream>
using namespace std;

class Hero{
    private:
       int health=10;

    public:
      int gethealth(){
         return health;
      }

      void sethealth(int n){
           health=n;
      }

};

int main(){
   Hero* ramesh = new Hero;
   /* cout<<(*ramesh).health<<endl;
    cout<<ramesh->health<<endl;*/

  cout<< ramesh->gethealth()<<endl;
  ramesh->sethealth(20);
  cout<< ramesh->gethealth()<<endl;


}