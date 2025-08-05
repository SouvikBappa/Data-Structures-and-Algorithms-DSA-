#include<iostream>
using namespace std;
//pass by value
/*void changeA(int a){
    a=20;
    cout<<a<<endl;
}
int main(){
    int a=10;
    changeA(a);
    cout<<a<<endl;
    return 0;
} */

//pass by reference pointer
void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}
int main(){
int a=10;
changeA(&a);
cout<<a<<endl;
return 0;
}


