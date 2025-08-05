#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){//O(n^2)
    
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            //array is already sorted
            break;
        }
    }
    print(arr,n);
}

int main(){
    int arr[]={1,2,3,4,6,5,7,8,9,10};//O(1,1)
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    return 0;
}