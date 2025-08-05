#include<iostream>
using namespace std;
 //global scope 
 int num=25;
void sum(int a,int b){
   /* //local Scope
    {
        int x=25;
        cout<<x;
    }


    if(a>=1){
        int x=25;
        cout<<x;
    }*/
    cout<<num<<endl;
    int s=a+b;
    cout<<s<<endl;;
}

int main(){
    sum(5,4);
    int s=10;
    cout<<num<<endl;
    return 0;
}