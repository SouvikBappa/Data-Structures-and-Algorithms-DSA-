#include<iostream>
using namespace std;

int prod(int a,int b){
    int p=a*b;
    return p;
}

bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout<<prod(10,20)<<endl;
    cout<<isEven(20)<<endl;
    return 0;
    
}