#include <stdio.h>
int main(){
    int a[10][10],r,c,i,j,sum1,sum2,sum3,temp,temp2;
    printf("Enter the no. of rows and columns of the matrix");
    scanf("%d",&r);
    scanf("%d",&c);
    for(j=0;j<r;j++){
        for(i=0;i<c;i++){
            scanf("%d",&a[j][i]);
        }
        printf("\n");
    }
    sum1=0;
    for(i=0;i<r;i++){
        for(j=i;j<=i;j++){
            sum1=a[i][j]+sum1;
        }
    }
    for(i=0;i<r;i++){
        temp=a[i][0];
        a[i][0]=a[i][c-1];
        a[i][c-1]=temp;
    }
    for(i=1;i<r;i++){
        temp2=a[i][1];
        a[i][1]=a[i][c-2];
        a[i][c-2]=temp2;
    }
    sum2=0;
     for(i=0;i<r;i++){
        for(j=i;j<=i;j++){
            sum2=a[i][j]+sum2;
        }
    }
    sum3=sum1-sum2;
    if(sum3<0){
        sum3=-sum3;
        printf("The diagonal difference is %d",sum3);
    }
    else{
        printf("The diagonal difference is %d",sum3);
    }
   
    return 0;
}