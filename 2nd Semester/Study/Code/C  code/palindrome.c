#include<stdio.h>
#include<string.h>
void strings(char str[]);
int main(){
char s[50];
gets(s);
strings(s);
return 0;
}
void strings(char str[]){
int i,c,n;
n=strlen(str);
c=0;
for(i=0;i<n;i++){
   if(str[i]==str[n-1-i]){
    c=c+1;
   }
}
if(c==n){
    puts("yes");
}
else{
    puts("no");
}
}
