#include<iostream>
using namespace std;
class Device{
    public:
    void powerOn(){
        cout<<"device  is on"<<endl;
    }
};
class Computer:public Device{
    public:
    void process(){
        cout<<"computer is processing"<<endl;
    }
};
class Laptop: public Computer{
    public:
    void carry(){
        cout<<"Laptop is carrying"<<endl;
    }
};
int main(){
    Laptop l;
    l.powerOn();
    l.process();
    l.carry();
    return 0;
}