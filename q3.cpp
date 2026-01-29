#include<iostream>
using namespace std;
int main(){
    int choice;
    float celsius,fahrenheit;
cout<<"1.celsius to fahrenheit"<<endl;
cout<<"2.fahrenheit to celsius"<<endl;
cout<<"enter choice";
cin>>choice;
switch(choice){
case 1:
cout<<"enter value of celsius"<<endl;
cin>>celsius;
fahrenheit = (celsius*(9/5) + 32);
cout<<"value of fahrenheit"<<fahrenheit<<endl;
break;
case 2:
cout<<"enter value of fahrenheit"<<endl;
cin>>fahrenheit;
celsius =(fahrenheit - 32)*5/9;
cout<<"value of celsius"<<celsius<<endl;
break;
default:
cout<<"invalid choice";

}
return 0;

}
