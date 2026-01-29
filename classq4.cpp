#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;
    cout<<"enter no of singer";
    cin>>N;
    int freq[100]={0};
    int singer;
    
    for(int i=0;i<=N;i++){
        cout<<"enter each song";
        cin>>singer;
        freq[singer]++;
    }
    return 0;

}