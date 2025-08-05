#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"op ";
    cin>>op;
    if(op=='+'){
        cout<<a+b<<endl;
    }else if(op=='-'){
        cout<<a-b<<endl;
    }else if(op=='*'){
        cout<<a*b<<endl;
    }else{
        cout<<a/b<<endl;
    }
    return 0;
}