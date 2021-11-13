#include<stdio.h>
#include<stdlib.h>
struct details{
    int eid;
    char name[100];
    int salary;
}emp[5];
void id(int r){
    int id,i;
    printf("Enter the employee id: ");
    scanf("%d",&id);
    for(i=0;i<r;i++){
        if(emp[i].eid==id){
            printf("Employee name:  %s\n",emp[i].name);
            printf("Employee salary:  %d\n",emp[i].salary);
        }
    }
}
int main(){
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("--------------------\n");
    printf("Enter Employee Details");
    printf("--------------------\n");
    printf("Enter employee name:");
    scanf("%s",&emp[i].name);
     printf("Enter employee ID:");
    scanf("%d",&emp[i].eid);
     printf("Enter employee salary:");
    scanf("%d",&emp[i].salary);
}
while (1)
{
    printf("1.Search by id\n");
    printf("Enter the choice: ");
    scanf("%d",&j);
    switch(j){
        case(1): id(n);
        break;
        case(2):exit(0);
    }
}

}