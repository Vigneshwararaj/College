#include<stdio.h>
int main(){
    int a[100],i,j,n,temp,large,count1,count2,small;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    large=a[0];
        for(i=0;i<n;i++){
                if(large<a[i+1]){
                    large=a[i+1];
                }
            }
            printf("%d",large);
        }    
    
