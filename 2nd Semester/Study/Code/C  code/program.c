#include<stdio.h>
int main(){
int a,b,*ptr1,*ptr2,sum;
scanf("%d",&a);
scanf("%d",&b);
ptr1=&a;
ptr2=&b;
sum=*ptr1+*ptr2;
printf("The sum is %d",sum);
}

