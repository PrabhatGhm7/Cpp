#include<iostream>
using namespace std;
struct area
{
    int l , b;
}st[5];
main()
{
    int ar,i;
    for (i=0;i<5;i++)
    {
        cout<<"enter l and b "<<endl;
        cin>>st[i].l>>st[i].b; 
        ar = st[i].l * st[i].b;
        cout<<"area = "<<ar<<endl;
    }
    
}