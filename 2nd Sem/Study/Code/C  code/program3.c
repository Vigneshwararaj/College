#include<stdio.h>
void main(){
int a,b,*ptr1,*ptr2;
scanf("%d",&a);
scanf("%d",&b);
ptr1=&a;
ptr2=&b;
if(*ptr1>*ptr2){
printf("a is larger");
}
else{
    printf("b is larger");
}
}
