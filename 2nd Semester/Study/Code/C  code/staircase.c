#include<stdio.h>
#include<string.h>
int main(){
    char s,ss;
    s='#';
    int n,i;
    printf("Enter the no. of staircase");
    scanf("%d",&n);
    ss=' ';
    for(i=0;i<n;i++){
        strncat(ss,s,1);
    }
}