#include<iostream>
using namespace std;
int main(){
    int n,reverse=0,digit,original;
    cout<<"enter no: ";
    cin>>n;
    original=n;
    while(n!= 0)
    {digit=n%10;
    reverse=reverse*10 + digit;
    n = n/10;}
    if(original==reverse){
cout<<"palindrome";}
else{
    cout<<"not palindrome";}
return 0;
}