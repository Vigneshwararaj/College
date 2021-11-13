#include<stdio.h>
int main(){
int a[10][10],b[10][10],i,j,prod1,prod2,prod3,m,n,swap,swap2;
printf("Enter the no. of rows and columns");
scanf("%d",&m);
scanf("%d",&n);
for(j=0;j<m;j++){
    for(i=0;i<n;i++){
        scanf("%d",&a[j][i]);
}
}
prod1=1;
for(i=0;i<n;i++){
    for(j=i;j<=i;j++){
        prod1=a[i][j]*prod1;
    }

}
for(i=0;i<n;i++){
    swap=a[i][0];
    a[i][0]=a[i][n-1];
    a[i][n-1]=swap;
}
for(i=1;i<n;i++){
    swap=a[i][1];
    a[i][1]=a[i][n-2];
    a[i][n-2]=swap;
}
prod2=1;
    for(i=0;i<n;i++){
    for(j=i;j<=i;j++){
        prod2=a[i][j]*prod2;
    }
    
}
prod3=prod1*prod2;
printf("The product of diagonal elememts is ");
    printf("%d",prod3);
return 0;
}