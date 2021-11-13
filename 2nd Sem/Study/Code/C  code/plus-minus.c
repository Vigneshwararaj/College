#include <stdio.h>
int main(){
    int a[10],b,c,d,n,i;
    float positive,zero,negative;
    b=0;
    c=0;
    d=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter the nos.");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            b=b+1;
        }
        else if (a[i]==0)
        {
            c=c+1;
        }
        else
        {
            d=d+1;
        }
    }
    positive = b/n;
    zero = c/n;
    negative = d/n;
    printf("Probality of positive no. is %f\n",positive);
    printf("Probality of zero is %f\n",zero);
    printf("Probality of negative no. is %f\n",negative);
    return 0;
}