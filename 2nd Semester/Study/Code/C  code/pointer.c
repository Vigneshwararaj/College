#include<stdio.h>
int main()
{
int x=10;
int *ip;
ip=&x;
printf("Number : %d\n",x);
printf("Address: %p\n",(&x));
printf("Number using pointer :  %d\n", *ip);
printf("Address using Pointer: %p\n",ip);
return 0;
}