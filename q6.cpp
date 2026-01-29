#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i; 
    cout<<"enter no of employees";
    cin>>n;
    vector<float>basic(n);
    for(i=0;i<=n;i++){
        cout<<"enter basic salary of employee"<<i+1<<": ";
        cin>>basic[i];
    
    float bonus=basic[i]*0.20;
    float netsalary=basic[i]+bonus;
        cout<<"bonus"<<bonus<<",netsalary"<<netsalary<<endl;}
    return 0;
}