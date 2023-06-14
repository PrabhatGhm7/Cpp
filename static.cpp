#include<iostream>
using namespace std;
class demo
{
    static int num;
    public:
    static int display()
    {
        return num;
    }
    static int increase()
    {
        num++;
    }
};
int demo:: num;
main()
{
    cout<<"initial value"<<demo::display()<<endl;
    
    demo::increase();
    demo::increase();
    demo::increase();
    cout<<"final value"<<demo::display()<<endl;
}
