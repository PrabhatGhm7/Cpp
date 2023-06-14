#include<iostream>
using namespace std;
class Test
{
    int n1,n2,n3,sm;
    public:
    void getdata();
    void display();
};
void Test::getdata()
{
    cout<<"Enter 2 number"<<"\t"<<endl;
    cin>>n1>>n2;
}
void Test::display()
{
    sm = n1 + n2;
    cout<<"the sum is "<<"\t"<<sm<<endl;
}
main()
{
    Test ob1;
    ob1.getdata();
    ob1.display();
}