#include<iostream>
#include<cstring>
using namespace std;

bool isPlalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<=end){
        if(str[st++]!=str[end--]){
            cout<<"not valid plaindrome\n";
            return false;
        }
    }
    cout<<"valid palindrome\n";
    return true;

}

int main(){

    char word[]="racecar";
    isPlalindrome(word,strlen(word));
    return 0;
}