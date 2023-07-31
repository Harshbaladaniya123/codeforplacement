#include<iostream>
using namespace std;

class Hero{
    public:
    int health;

    ~Hero(){
        cout<<"deconstyructor called";
    };
};

int main(){
    Hero ramesh;
    Hero* r1 = new Hero;
    delete r1;
}