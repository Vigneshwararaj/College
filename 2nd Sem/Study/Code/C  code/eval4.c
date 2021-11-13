#include<stdio.h>
int main()
{
int x=10;
int *ip;
float y=2.5, *fp;
fp = &y;
ip=&x;
printf("Number using pointer :  %d\n", *ip);
printf("Address using Pointer: %p\n",ip);
printf("Decimal value : %f\n",*fp);
printf("Address of y : %p\n",fp);
x+=1;
printf("Updated Number :  %d\n", *ip);
*ip *=5;
printf("Updated Number :  %d\n", *ip);
++*ip;
printf("Updated Number :  %d\n", *ip);
return 0;
}