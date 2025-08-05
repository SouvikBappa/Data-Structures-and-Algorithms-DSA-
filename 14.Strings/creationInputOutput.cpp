#include<iostream>
#include<cstring>
using namespace std;

int main(){
    /*char work[]="code";
    char work2[50]={'c','o','d','e'};
    cout<<work<<endl;
    cout<<work2<<endl;
    cout<<strlen(work2)<<endl;*/

    /*char word[30];
    cin>>word;
    cout<<"Your word was : "<<word<<endl;
    cout<<strlen(word)<<endl;*/
   
     char sentence[30];
    cin.getline(sentence,30,'*');
    cout<<"Your word was : "<<sentence<<endl;
    cout<<strlen(sentence)<<endl;
    return 0;
}