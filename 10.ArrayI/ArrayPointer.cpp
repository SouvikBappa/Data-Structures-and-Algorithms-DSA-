#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<arr<<endl;
    int y=25;
    arr=&y;
    return 0;
}
    /*
    int main(){
    int x=10;
    int *ptr=&x;
    int y=25;
    ptr=&y;
    cout<<*ptr<<endl;
    return 0;
}*/

