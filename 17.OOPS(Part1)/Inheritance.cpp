#include<bits/stdc++.h>
using namespace std;

class Animal{
   public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"Breathes\n";
    }
};

class Fish : public Animal{
    public:
    int fins;

    void swim(){
        eat();
        cout<<"swims\n";
    }
};

int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0; 
}