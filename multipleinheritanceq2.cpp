#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    public:
    Employee():name("xyz"){};
    Employee(string n):name(n){};
    void displayEmployeename() {
    cout << "Name: " << name << endl;
}

};
class Department{
    protected:
    string Departmentname;
    public:
    Department():Departmentname("abc"){};
    Department(string d):Departmentname(d){};
    void displayDepartmentname() {
    cout << "Department: " << Departmentname << endl;
}
    
};
class Manager:public Employee,public Department{
    public:
    Manager() : Employee(), Department() {}
    Manager(string n,string d):Employee(n),Department(d){}
    void displayname(){
         displayEmployeename();
         displayDepartmentname();
        
    }

};
int main(){
    Manager r1,r2("Komal ","Btech CSE");
     r1.displayname();
     r2.displayname();
    return 0;
}