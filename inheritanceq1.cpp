#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
    public:
    person(){
        cout<<"\n person default constructor";
        name="default";
        age = 50;
    }
    person(string nm,int ag){
        cout<<"\n person parametarized constructor";
        name=nm;
        age =ag;
    }
    void display(){
        cout<<"\n name= "<<name<<"\n age= "<<age;
    }
};
    class student:public person{
        string rollno;
        public:
        student(){
            cout<<"\n student default constructor";
            rollno="25csu101";
        }
        student(string nm,int ag,string rn):person(nm,ag)//initialisation list
        {
            cout<<"\nstudent parametarized";
            rollno=rn;
        }
        void display_student(){
            display();
            cout<<"\n rollno= "<<rollno;
        }
    };

int main(){
    student p1,p2("abcd",23,"25csu101");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}