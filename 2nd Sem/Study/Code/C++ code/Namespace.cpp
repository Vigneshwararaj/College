#include<iostream>
using namespace std;
namespace A{
    int x=5;
}
namespace B{
    int x=6;
}
int main(){
    cout<<A::x+B::x;
}