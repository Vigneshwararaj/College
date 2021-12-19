#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    int b=strlen(a);
    int i;
  for(i=b-2;i<=b-2;i++)
  {
       if(a[b-2]=='A'||a[b-2]=='a')
       {
        if(a[0]=='1'&&a[1]=='2'){
            for(i=0;i<2;i++){
                a[i]='0';
            }
           for(i=0;i<b-2;i++)
        {
            printf("%c",a[i]);
        }
        }
        else{
            for(i=0;i<b-2;i++)
        {
            printf("%c",a[i]);
        }
        }

       }
       if(a[b-2]=='P'||a[b-2]=='p'){
           if(a[0]=='1'&&a[1]=='2'){
               for(i=0;i<b-2;i++){
                   printf("%c",a[i]);
               }
           }
           else{
               for(i=0;i<=0;i++){
               a[i]=a[i]+1;
           }
           for(i=1;i<=1;i++){
               a[i]=a[i]+2;
           }
            for(i=0;i<b-2;i++)
        {
            printf("%c",a[i]);
        }
           }
       }
 }
 return 0;
}