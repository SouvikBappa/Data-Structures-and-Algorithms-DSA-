#include<iostream>
using namespace std;

void maxSubarraySum(int *arr,int n){
    int maxSum=INT8_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum Subarray sum="<<maxSum<<endl;
}

//slightly Optimized
void maxSubarraySum3(int *arr,int n){
    int maxSum=INT8_MIN;
    for(int start=0;start<n;start++){//start=2
        int currSum=0;
        for(int end=start;end<n;end++){//end=2,3,4,5
            currSum+=arr[end];
            
           
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum Subarray sum="<<maxSum<<endl;
}
//kadanes Alogorithm
void maxSubarraySum2(int *arr,int n){
    int maxSum=INT8_MIN;
    int currSum=0;

    for(int i=0;i<n;i++){
         currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }


    }
    cout<<"maximum Subarray sum="<<maxSum<<endl;
}
//max(a,max(b,c))
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSubarraySum2(arr,n);
    maxSubarraySum3(arr,n);
    maxSubarraySum(arr,n);
    return 0;
}