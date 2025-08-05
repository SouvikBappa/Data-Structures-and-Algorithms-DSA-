#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Teacher : public Person {
public:
    string subject;
};

class Student : public Person {
public:
    float cgpa;
};

class TA : public Teacher, public Student {
public:
    void show() {
        cout << "Name: " << Teacher::name << endl;
        cout << "Subject: " << subject << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    TA ta1;
    ta1.Teacher::name = "Souvik Chel";
    ta1.subject = "Computer Science";
    ta1.cgpa = 9.0;

    ta1.show();

    return 0;
}
