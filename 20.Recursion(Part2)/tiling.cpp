#include<iostream>
using namespace std;

int tilingProblem(int n){//2*n

    if(n==0 || n==1){
        return 1;
    }

    return tilingProblem(n-1)+tilingProblem(n-2);//vertical+horizontal

}

int main(){
    
    cout<<tilingProblem(5)<<endl;
    return 0;
}