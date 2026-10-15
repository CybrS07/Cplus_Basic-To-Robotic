#include <iostream>

using namespace std;
struct student{
    string name;
    int age;
    double cgpa;
};
int main(void){
    student st1;
    st1.name = "Taha";
    st1.age = 20;
    st1.cgpa= 3.33;
    cout << st1.name << "\t" << st1.age << "\t" << st1.cgpa;
    
    student st2;
    st2.name = "\nMike";
    st2.age = 20;
    st2.cgpa= 3.63;
    cout << st2.name << "\t" << st2.age << "\t" << st2.cgpa;

    student st3;
    st3.name = "\nAlexander";
    st3.age = 20;
    st3.cgpa= 3.93;
    cout << st3.name << "\t" << st3.age << "\t" << st3.cgpa;

    cout << "\n\nName" << "\n" << st1.name << "\n" << st2.name << "\n" << st3.name ;
};