#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    string str="apna college!";
    /*for(int i=0;i<str.length();i++){
        //dot operator
        cout<<str[i]<<" ";
    }
    cout<<"\n";*/

    for(char ch:str){
        cout<<ch<<",";
    }
    cout<<endl;
    return 0;
}