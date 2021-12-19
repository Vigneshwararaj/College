#include<iostream>
using namespace std;
int main(){
  int a[100],i,j,n,len,x;
  cout<<"enter the size of array";
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  len=0;
  cout<<"Enter the position of digit to be deleted";
  cin>>x;
  for(i=x;i<n;i++){
    a[i]=a[i+1];
  }
  for(i=0;i<n-1;i++){
    len=len+1;
  }
  n=len;
  for(i=0;i<n;i++){
    cout<<a[i];
  }
}