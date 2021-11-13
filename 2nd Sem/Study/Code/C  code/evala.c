#include<stdio.h>
struct Animals{
    char am[100];
    int bm[100];
}an[100];
int main(){
int i,m,n,j;
printf("Enter the no. of months");
scanf("%d",&n);
printf("Enter the no. of animals");
scanf("%d",&m);
for(i=0;i<m;i++){
    printf("Animals: ");
    scanf("%s",&an[i].am);
    printf("------------\n");
    for(j=0;j<n;j++){
        printf("Month %d: ",j+1);
        scanf("%d",&an[i].bm[i]);
    }
}
int k;
char EA;
printf("1. for knowing endangered species\n");
printf("2. for the week where the animals got depleted\n");
while(1){
    printf("Enter the choice");
    scanf("%d",&k);
    for(k=0;j!=0;k++)
  {
  	 scanf("%d",&j);
    if(j==1)
  {
  	EA = an[0].bm[3];
  	for(i=1;i<m;i++)
  	{
  		if(EA > an[i+1].bm[3])
  		{
  			EA = an[i+1].bm[3];
  			printf("%s",an[i+1].am);
		}
	
	}
	printf("\npress other nos 2 or 0");
  }
  else if(j==2)
  {
  	int n1=0,n2=0,n3=0,n4=0,mf1,mf2,k,l;
  	for(i=0;i<m;i++)
  	{
  		n1+=an[i].bm[0];
  		n2+=an[i].bm[1];
  		n3+=an[i].bm[2];
  		n4+=an[i].bm[3];
	}
	if(n1<n2)
	{
		mf1=n1;
		k=1;
	}
	else
	{
		mf1=n2;
		k=2;
	}
	
	if(n3<n4)
	{
		mf2=n3;
		l=3;
	}
	else
	{
		mf2=n4;
		l=4;
	}
	
	if(mf1<mf2)
	{
		printf("Month%d\n",k);
	}
	else
	{
		printf("Month%d\n",l);
	}
	printf("press other nos 1 or 0");
  }
  else
  {
  	k=0;
  }
  
}

}