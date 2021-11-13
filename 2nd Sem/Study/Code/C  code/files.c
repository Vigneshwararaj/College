#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=1;
	fp=fopen("hello.c","r");
	while((ch==getc(fp))!=EOF){
		if(ch=='\n'){
			i++
		}
	}
	return 0;
}