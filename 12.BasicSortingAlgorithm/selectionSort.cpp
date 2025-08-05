
#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;//unsorted part starting
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
            
        }
        swap(arr[i],arr[smallestIdx]);
    }

}
int main(){
    int arr[]={5,4,1,3,2};//O(1,1)
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}

