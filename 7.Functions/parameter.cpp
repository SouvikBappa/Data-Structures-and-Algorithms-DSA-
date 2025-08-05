#include<iostream>
using namespace std;

int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int diff(int a,int b){
    int diff=a-b;
    return diff;
}
int main(){
    int s=sum(2,4);//Arguments
        int b=diff(2,4);//Arguments

    cout<<"sum= "<<s<<endl;
        cout<<"diff= "<<b<<endl;

    return 0;
}