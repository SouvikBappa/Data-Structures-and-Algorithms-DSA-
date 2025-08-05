#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
    void show(){
        cout<<"Parent class shows..\n";
    }

    virtual void hello(){
        cout<<"parent hello\n";
    }
};

class child:public Parent{
    public:
    void show(){
        cout<<"child class shows..\n";
    }
     void hello(){
        cout<<"child hello\n";
    }
};

int main(){
    child child1;
    //child1.show();
    Parent *ptr;

    ptr=&child1;//Run time Binding
    ptr->hello();//Virtual function
    return 0;
}