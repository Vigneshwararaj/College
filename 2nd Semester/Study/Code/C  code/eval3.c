#include<stdio.h>
void unique(int *arr,int length);
int main(){
    int a[10],n,i,j;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    unique(&a,n);
    return 0;
}
void unique(int *arr,int length){
    int count,i,j,n,temp;
    for(i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(*arr+j<*arr+i){
                temp=*arr+i;
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*arr+i != *arr+j){
                for(i=0;i<j;i++){
                    count=count+1;
                }
            }
        }
    }
    }

