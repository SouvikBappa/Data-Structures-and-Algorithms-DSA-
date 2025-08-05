#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    float cgpa;
    public:
    //properties
    
    

    //methods
    void getPercentage(){
        cout<<(cgpa*10)<<"% \n";
    }

    //setters
    void setName(string nameVal){
        name=nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa=cgpaVal;
    }

     //getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

class user{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deleting account\n";
    }
    void editBio(string newBio){
        bio=newBio;

    }
};

int main(){
    Student s1;//object
    /*s1.cgpa=9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    cout<<sizeof(s1)<<endl;*/

    s1.setName("Souvik");
    s1.setCgpa(9.0);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;


    return 0;
}

