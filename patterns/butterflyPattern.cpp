 #include <iostream>
using namespace std;

int main(){
    int n = 4;
    //1st half
for (int i = 1; i <= n; i++){
    //star
    for(int j=1;j<=i;j++ ){
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++ ){
        cout<<" ";
    }
    //star
    for(int j=1;j<=i;j++ ){
        cout<<"*";
    }
    cout<<endl;
}
//2nd half
for(int i=n;i>=1;i--){
    //star
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //spaces
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    //star
    for(int j=1;j<=i;j++){
        cout<<"*";
    }

    cout<<endl;

}
return 0;
}