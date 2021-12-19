#include<iostream>
using namespace std;
int main(){
   int a[100],n,i,j,k,l;
   cout<<"Enter the no. of students";
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<n;i++){
       l=0;
       for(j=0;j>=0;j++){
           if((a[i]+l)%5!=0){
              l=l+1;
           }
           else{
                k=a[i]+l;
                break;
           }
       }
        if(a[i]<38){
           a[i]=a[i];
       }
       else if(k-a[i]<3){
           a[i]=k;
       }
       else if(k-a[i]==3){
           a[i]=a[i];
       }
   }
   for(i=0;i<n;i++){
       cout<<a[i]<<endl;
   }
}