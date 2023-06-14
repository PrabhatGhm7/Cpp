#include<iostream>
using namespace std;
class Test
{
    int x;
    public:
    Test (int a)
    {
        x=a;
    }
    void get_input()
    {
        cout<<"Enter a number:"<<endl;
        cin>>x;
    }
    Test operator ++()
    {
        int temp = x;
        ++x;
        return temp;
    }
    void display()
    {
        cout<<"Value ="<<x<<endl;
    }
};
int main()
{
    Test ob2(0);
    ob2.get_input();
    ob2.display();
    ++ob2;
    ob2.display();
}
