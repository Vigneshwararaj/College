#include<stdio.h>
void addtwonos(int *,int *);
int main(){
int a,b;
scanf("%d",&a);
scanf("%d",&b);
addtwonos(&a,&b);
return 0;
}
void addtwonos(int *ptr,int *qtr){
int sum;
sum=*ptr+*qtr;
printf("%d",sum);
}
