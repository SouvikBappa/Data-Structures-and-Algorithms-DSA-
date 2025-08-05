#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b=20;
    int c=30;
    if(a>=b && a>=c){
        cout<<a<<endl;

    }else if(b>=c){
    cout<<(b)<<endl;
    }else{
        cout<<c;
    }

    return 0;
}