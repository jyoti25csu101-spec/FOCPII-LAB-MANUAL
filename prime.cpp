#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime = true;
    cout<<"enter n: ";
    cin>>n;
    if(n<=1){
        cout<<"not a prime no";
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime = false; 
            break;  
        }
    }
    if(isPrime){
        cout<<"prime no";
    }
    else{
        cout<<"not prime no";
    }
    return 0;
}