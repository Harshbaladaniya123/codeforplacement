#include<iostream>
using namespace std;

class Hero{

    public:
    int health;
    int level=1;


    void attack(){
        cout<<"attack";
    }


};

int main(){
   Hero ramesh;
   ramesh.health=1;
   ramesh.level;
   cout<<sizeof(ramesh)<<endl;
   cout<<ramesh.health<<endl;
   cout<<ramesh.level<<endl;
   ramesh.attack();
}