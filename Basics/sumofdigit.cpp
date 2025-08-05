#include <iostream>
using namespace std;

int main(){
    int n=10829;
    int digSum=0;
    int res=0;
    while(n>0){
        int lastDig=n%10;
        /*if(lastDig%2!=0){
            digSum+=lastDig;
        }*/
        //digSum+=lastDig;
        res=res*10+lastDig;
        cout<<lastDig<<endl;;
        n=n/10;
        
    }
    cout<<res<<endl;
}