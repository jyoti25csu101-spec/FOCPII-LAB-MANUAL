#include<iostream>
using namespace std;
int main (){
    int itemno,unitprice,quantity;
    float amount,finalamount;
    amount = unitprice*quantity;
    finalamount = amount*20/100;
    cout<<"enter itemno"<<endl;
    cin>>itemno;
    cout<<"enter unitprice"<<endl;
    cin>>unitprice;
    cout<<"enter quantity"<<endl;
    cin>>quantity;
    amount = unitprice*quantity;
    finalamount = amount*20/100;
    cout<<"final price after applying 20% discount"<<endl<<finalamount;
    return 0;}





