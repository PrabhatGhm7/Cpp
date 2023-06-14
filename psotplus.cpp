//Postfix
#include<iostream>
using namespace std;
class Test
{
    int a;
    public:
    Test()
    {
        cout<<"enter a "<<endl;
        cin>>a;
    }
    int operator ++(int)
    {
        int temp = a;
        a++;
        return temp;
    }
    int display()
    {
        return a;
    }
};

int main()
{
    Test ob2;
    cout<<"Before="<<ob2.display()<<endl;
    ob2++;
    cout<<"After="<<ob2.display()<<endl;
}
