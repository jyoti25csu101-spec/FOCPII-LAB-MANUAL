#include<iostream>
using namespace std;
int main(){
    int marks[]={56,78,98,50,23,45};
    int max=marks[0];
    int min=marks[0];
    int avg=0;
   void computePerformance(int marks[],int size);{
   for(int i=1;i<=6;i++){
   if( max<marks[i])
max=marks[i];
   if( min>marks[i])
min=marks[i];
avg+=marks[i];
   }
}
   cout<<"\nmax="<<max<<"\n min="<<min<<"\n avg="<<float(avg)/6;
   return 0;
}