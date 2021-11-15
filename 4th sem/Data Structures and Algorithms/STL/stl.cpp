#include<bits/stdc++.h>
using namespace std;
bool c(int x,int y){//a comparator function for sort
    //return x<y(ascending order);
    return x>y;//(descending order)
}
void Vector()
{
    vector<int> a;
    int i=0;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int ele=0;
        cin>>ele;
        a.push_back(ele);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    sort(a.begin(),a.end());// sort function in STL; for array:sort(a,a+n); for Vector: sort(a.begin(),a.end())//O(logN)
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    bool present=binary_search(a.begin(),a.end(),3);//searches if element is present in the array//binary search
    cout<<present<<endl;
    vector<int>::iterator a1 = lower_bound(a.begin(),a.end(),3);//>=3(first element >=3)
    vector<int>::iterator a2 =upper_bound(a.begin(),a.end(),3);//>3(first element >3)//Iterators are pointer variables and they store address of the value and to access the elements we use *
    cout<<*a1<<endl;
    cout<<*a2<<endl;
    sort(a.begin(),a.end(),c);//c is a comparator function which is used to sort the func in desc or asc order
    vector<int>::iterator a3;
    for(a3=a.begin();a3!=a.end();a3++)
    {
        cout<<*a3<<' ';
    }//for loop using iterator
    cout<<endl;
    for(auto it3:a)//auto operator deduces the type automatically and this isnt a pointer variable
    {
        cout<<it3<<' ';
    }
}

void Set()
{
    int n;
    cin>>n;
    set<int>a;//ascending order and no duplicate elements
    for (int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.insert(ele);
    }
    for(auto x : a)
    {
        cout<<x<<' ';
    }
    auto it=a.find(3);// if 3 is present it will point to 3 else it will point to a.end()
    if ( it == a.end())
    {
        cout<<"Not Present"<<endl;
    }
    else
    {
        cout<<"Present"<<endl;
        cout<<*it<<endl;
    }
    auto t=a.lower_bound(3);// greater than equal to 3
    auto t2=a.upper_bound(3);//greate than 3
    cout<<*t2<<endl;
    cout<<*t<<endl;
    //a.erase(any number) erases the number from the set

}
void Map()
{
   map<int,int>a;//maps int to int
}
int main()
{
    
    //Vector();
    //Set();
    Map();
}
