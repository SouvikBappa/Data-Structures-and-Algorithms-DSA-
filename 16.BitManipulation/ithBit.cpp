#include<iostream>
using namespace std;

int getIthBit(int num,int i){
    int bitMask=1<<i;
    if(!(num&bitMask)){
    
        return 0;
    }else{
        return 1;
    }
    

}

int setIthBit(int num,int i){
    int bitMask=1<<i;
    return (num |bitMask); 
}

int clearIthBit(int num,int i){
    int bitMask=~(1 << i);
    return (num & bitMask); 
}

bool isPowerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }else{
        return false; 
    }
}
int  main(){
    //cout<<getIthBit(6,2)<<endl;
    cout<<getIthBit(7,1)<<endl;
    cout<<setIthBit(6,3)<<endl;
    cout<<clearIthBit(6,1)<<endl;
    cout<<isPowerOf2(8)<<endl;
    return 0; 
}