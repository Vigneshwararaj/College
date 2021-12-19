#include<stdio.h>
int main(){
int a[10][10],i,j,x,m,n,temp;
printf("Enter the rows and columns");
scanf("%d%d",&m,&n);
for(j=0;i<m;i++){
    for(i=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    for(j=0;i<n;i++){
        for(i=i+1;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
    }
}
}