#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
    Parent(){
    cout<<"Constructor of Parent\n";
    }
    ~Parent(){
    cout<<"destructor of Parent\n";
    }
};

class Child:public Parent{
    public:
    Child(){
        cout<<"Constructor of child\n";
    }
    ~Child(){
        cout<<"Destructor of child\n";
    }

};

int main(){
    Child obj;
    return 0;
}