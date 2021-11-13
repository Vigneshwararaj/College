#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,j,num;
    long long max,prod,max2,temp1,temp2,max3;
    cin>>n;
    vector<long long>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    temp1=-1;
    max3=-1;
    for(i=0;i<n;i++){
        if((a[i]>=temp1)&&(a[i]>max3)){
            max3=a[i];
            max=i; 
        }
    }    
    temp2=-1;
    max3=-1;
    for(j=0;j<n;j++){
        if((max!=j)&&(a[j]>=temp1)&&(a[j]>max3)){
            max3=a[j];
            max2=j;

        }       
    }
cout<<a[max]*a[max2];
}    