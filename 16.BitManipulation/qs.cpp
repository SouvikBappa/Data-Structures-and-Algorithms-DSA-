#include<iostream>
using namespace std;

void updateIthBit(int num,int i,int val){
    num=num & ~(1<<i);

    num=num | (val <<i);

    cout<<num<<endl;
}
void clearBits(int num,int i){
    int bitMask=(~0)<<i;
    num=num&bitMask;
    cout<<num<<endl;
}

int countSetBit(int num){
    int count=0;
    while(num>0){
        int lastDig=num&1;
        count+=lastDig;

        num=num>>1;
    }
    cout<<count<<endl;
    return count;
}
int main(){
   // updateIthBit(7,3,1);
   // clearBits(15,2);
    countSetBit(10);
    return 0; 
}