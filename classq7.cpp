#include<iostream>
using namespace std;
int Result(int,int,int=0,int=0,int=0);
int main(){
   cout<<"\n Result of 2 subjects "<<Result(45,58);
   cout<<"\n Result of 3 subjects "<<Result(57,68,95);
   cout<<"\n Result of 4 subjects "<<Result(78,49,65,77);
   cout<<"\n Result of 5 subjects "<<Result(47,69,84,56,75);
   return 0;}
   int Result(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5);
   }


