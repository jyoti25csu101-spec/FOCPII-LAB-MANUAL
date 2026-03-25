#include<iostream>
using namespace std;
class Academic{
    protected:
    int marks;
    public:
    Academic():marks(0){};
    Academic(int m):marks(m){};
    void display1(){
        cout<<"\n marks: "<<marks;
    }
};
class Sports{
    protected:
    int score;
    public:
    Sports():score(0){};
    Sports(int s):score(s){};
    void display2(){
        cout<<"\n score: "<<score;
    }
};
class Result:public Academic,public Sports{
    public:
Result(int m,int s):Academic(m),Sports(s){}
void display3(){
     display2();
    display1();
    cout<<"\n total: "<<marks+score;
}
};
int main(){
    Result r1(20,30);
r1.display3();
    return 0;
}