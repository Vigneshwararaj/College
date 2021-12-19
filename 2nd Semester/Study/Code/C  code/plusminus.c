#include<stdio.h>
int main(){
    double arr[100],count1,count2,count3;
    int i,n;
    double a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    count1=0;
    count2=0;
    count3=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count1=count1+1;
        }
        else if(arr[i]<0)
        {
            count2=count2+1;
        }
        else if(arr[i]==0)
        {
            count3=count3+1;
        }
    }
a=count1/n;
b=count2/n;
c=count3/n;
printf("The no. of +ve nos is %lf",a);
printf("The no. of -ve nos is %lf",b);
printf("The no. of 0's is %lf",c);
}