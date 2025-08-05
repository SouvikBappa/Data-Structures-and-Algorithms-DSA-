#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;

    cout<<aptr<<endl;
    aptr++;//1 int ++
    cout<<aptr<<endl;
    aptr+=3;
    cout<<(aptr-3)<<endl;
    return 0;
}


