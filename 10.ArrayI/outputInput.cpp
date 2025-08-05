#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter length of array:";
    cin>>n;
    int arr[n];
    //int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    for(int i=0;i<n;i++){
    cout<<arr[i];//idx=0,1,2,3,4
    }
    cout<<endl;
    return 0;
}

    