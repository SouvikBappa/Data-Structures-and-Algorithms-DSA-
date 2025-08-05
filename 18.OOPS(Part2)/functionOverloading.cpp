#include<bits/stdc++.h>
using namespace std;

class print{
    public:
    void show(int x){
        cout<<"Int: "<<x<<endl;
    }
    void show(string str){
        cout<<"string: "<<str<<endl;
    }
    };



int main(){
    print obj1;
    obj1.show(25);
    obj1.show("apnacollege");

    
    return 0; 
}