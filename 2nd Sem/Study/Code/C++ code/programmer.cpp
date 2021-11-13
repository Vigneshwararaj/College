#include<iostream>
using namespace std;
struct months{
    int jan=31,feb,march=31,april=30,may=31,june=30,july=31,aug=31;
}month;
int main(){
    int year,sum,day=256,pday;
    cin>>year;
    if((year %4==0 && year%100!=0)|| (year%400==0)){
        month.feb=29;
        sum=month.jan+month.feb+month.march+month.april+month.may+month.june+month.july+month.aug;
        pday=day-sum;
        cout<<pday<<".09."<<year;
    }
    else{
        month.feb=28;
        sum=month.jan+month.feb+month.march+month.april+month.may+month.june+month.july+month.aug;
        pday=day-sum;
        cout<<pday<<".09."<<year;
    }
}