#include<iostream>
using namespace std;
int main(){
    //if else
    /*float a,b,c;
    cout<<"score of 1st player"<<endl;
    cin>>a;
    cout<<"score of 2nd player"<<endl;
    cin>>b;
    cout<<"score of 3rd player"<<endl;
    cin>>c;
    if(a>b&&a>c){
        cout<<"1st player is winner"<<a;
    }
     else if(b>a&&b>c){
        cout<<"2nd player is winner"<<b;
     }
     else if(c>a&&c>b){
     cout<<"3rd player is winner";
    }
    else{
        cout<<"it's a tie";
    }*/
   //by function
   int score[3],i;
   cout<<"enter score of 3 players";
   for(i=0;i<3;i++){
    cin>>score[i];
   }
   int maxindex=0;
   for(i=1;i<3;i++){
    if(score[i]>score[maxindex]){
        maxindex=i;
    }
   }
   cout<<"player"<<maxindex+1<<"is ahead";
     return 0;
}