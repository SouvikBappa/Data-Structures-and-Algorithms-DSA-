#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";//kaam
    print(n-1);//faith,next call everse for ascending order both line
}

int main(){
    print(100);
    return 0;
}