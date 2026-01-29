#include<iostream>
using namespace std;
int main(){
    int n,i;
    long long fact = 1;
    cout<<"enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"factorial is: "<< fact;
    return 0;
}