#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void countSort(int arr[],int n){
    int freq[100000];//range
    int minval=INT8_MAX,maxVal=INT8_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }
    //1st step-O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]];
        freq[arr[i]]++;
    }
    //2nd step-O(n)=max-min
    for(int i=minval,j=0;i<=maxVal;i++ ){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countSort(arr,n);
    print(arr,n);
    return 0;
}