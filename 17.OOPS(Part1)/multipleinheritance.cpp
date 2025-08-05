#include<bits/stdc++.h>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student {
public:
    string name;
};

int main() {
    TA ta1;
    ta1.name = "Souvik Chel";
    ta1.subject = "Computer";
    ta1.cgpa = 8.5;

    cout << ta1.name << endl;
    cout << ta1.cgpa << endl;
    cout << ta1.subject << endl;

    return 0;
}
