#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,j,num;
    long long max,prod,max2,temp1,temp2;
    cin>>n;
    vector<long long>a(n);
    for(i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    temp1=-1;
    for(i=0;i<n;i++){
        if(a[i]>=temp1){
            max=i;
           cout<<a[3];
      }
       
    }
    temp2=-1;
    for(j=0;j<n;j++){
        if((max!=j)&&(a[j]>temp2)){
            max2=j;
        }
    }   
}    