#include<iostream>
using namespace std;
int main(){
    //using temp
    int a,b,temp;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    /*temp=a;
    a=b;
    b=temp;
    //aritmetic operater
    a=a+b;
    b=a-b;
    a=a-b;*/
    //bitwise operater
   a= a^b;
   b= b^a;
   a= a^b;
    cout<<"a= "<<a<< ", b= "<<b;

    return 0; 
    

}