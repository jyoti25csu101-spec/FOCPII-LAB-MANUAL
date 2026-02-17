#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string username;
    cout<<"enter username";
    cin>>username;
    bool valid= true;
    for(char ch: username){
        if(!isalnum(ch)){
            valid =false;
            break;
        }      
    }
    if(valid){
        cout<<"valid username";
    }
    else{
        cout<<"invalid username";
    }
    return 0;

}