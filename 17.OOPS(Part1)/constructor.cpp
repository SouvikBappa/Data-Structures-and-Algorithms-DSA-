#include<bits/stdc++.h>
using namespace std;

class car{
    string name;
    string color;
public:
    //car(string nameValue,string colorVal){

    car(){
        cout<<"Constructor without parameter..\n";
    }
    car(string name,string color){
        cout<<"Constructor with parameter..\n";
        this->name=name;
       this->color=color;
    }

    void start(){
        cout<<"car has started..\n";
    }
    void stop(){
        cout<<"car has stopped..\n";
    }

    //getter
    string getName(){
        return name;
    }
};

int main(){
    car c0;//non parameter
    car c1("maruti 800","while");//parameter
    car c2("suzuki","white");
    cout<<"car name: "<<c1.getName()<<endl;
    return 0;
}