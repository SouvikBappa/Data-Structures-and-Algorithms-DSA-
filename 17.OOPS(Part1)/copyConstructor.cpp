#include<bits/stdc++.h>
using namespace std;


class Car{
    public:
    string name;
    string color;
    int *mileage;
    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;//dynamic allocation
        *mileage=12;
    }

    Car(Car &original){
        cout<<"Copying original to new..\n";
        name=original.name;
        color=original.color;
        mileage=new int;

        *mileage=*original.mileage;
    }

    ~Car(){
        cout<<"deleting object..\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL; 
        }
    }



};
int main(){
    Car c1("maruti 800","white");


   //Car c2(c1);//custom
    /*cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;

    cout<<*c1.mileage<<endl;*/
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;


    return 0;
}