#include<iostream>
#include<iomanip>
#define PI 3.1454558454555848
#define PI2 3.1444444444444

using namespace std;

int main(){
    int age=10;
    int marks=-200;
    char grade='A';
    bool isAdult=true;
    float cgpa=8.5;
    double price=99.99;


    cout<<"size of int:"<<sizeof(int)<<endl;
    cout<<"size of char:"<<sizeof(char)<<endl;
    cout<<"size of bool:"<<sizeof(bool)<<endl;
    cout<<"size of float:"<<sizeof(float)<<endl;
    cout<<"size of double:"<<sizeof(double)<<endl;
    cout<<setprecision(12)<<PI<<endl;
    cout<<setprecision(12)<<PI2<<endl;
    return 0;
}