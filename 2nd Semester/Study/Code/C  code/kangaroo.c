#include<Stdio.h>
int main(){
    int x1,v1,x2,v2,a[100],b[100],count,i,n;
    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x1=x1+v1;
        a[i]=x1;
    }
    for(i=0;i<n;i++){
        x2=x2+v2;
        b[i]=x2;
    }
    count=0;
    for(i=0;i<n;i++){
      if(a[i]==b[i]){
          count=count+1;
      }
    }
    if(count>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}