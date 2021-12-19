#include<stdio.h>
#include<string.h>
void string(char str[]);
int main(){
char s[50];
gets(s);
string(s);
}
void string(char str[]){
int i,j,k,n;
n=strlen(str);
for(i=0;i<=n;i++){
    for(j=0;j<=n;j++){
        for(k=i;k<j;k++){
            printf("%c",str[k]);

        }
        printf("\n");
    }
}

}
