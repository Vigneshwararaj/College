#include<stdio.h>
#include<string.h>
int main(){
    int i,count;
    char a[5000];
    gets(a);
    int b;
    b=strlen(a);
    count=0;
for(i=b-1;i>=0;i--){
    if(a[i]==' '){
        break;
    }
    else{
        count=count+1;
    }
}
printf("%d",count);
return 0;
}