#include<iostream>
using namespace std;

int main(){
    //int a=5
    //int *ptr1=&a;
    //int *ptr2=ptr1+3;
    int arr[]={1,2,3,4,5,6};
    int *ptr1=arr;
    int *ptr2=ptr1+3;

    cout<<*ptr2<<endl;
    cout<<*ptr1<<endl;

    cout<<ptr2-ptr1<<endl;

    cout<<(ptr2>ptr1)<<endl;
    cout<<(ptr1==arr)<<endl;
    return 0;
}