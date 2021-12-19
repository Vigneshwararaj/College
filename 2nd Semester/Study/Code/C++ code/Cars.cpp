#include<iostream>
using namespace std;
int main(){
int a[100],i,j,n,temp,count,len;
cout<<"Enter the no. of cars";
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
count=0;
len=0;
for(i=0;i<n;i++){
    count=count+a[i];
}
}