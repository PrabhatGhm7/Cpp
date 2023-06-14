#include<iostream>
using namespace std;
class sum
{
    int m,cm;
    public:
    sum()
    {
        m=0;
        cm=0;
    }
    sum(int x, int y)
    {
        m=x;
        cm=y;
    }
    sum operator +(sum obj)
    {
        sum temp;
        temp.cm = cm + obj.cm;
        temp.m = m+ obj.m;
        if (temp.cm>100)
        {
            temp.m++;
            temp.cm=temp.cm-100;
        }
        return temp;
    }
    void showdata()
    {
        cout<<"cm =  "<<cm<<endl;
        cout<<"m =   "<<m<<endl;
    }
};
main()
{
    sum obj1(5,49) , obj2(8,99);
    sum obj3;
    obj1.showdata();
    obj2.showdata();
    obj3= obj1+obj2;
    obj3.showdata();

}

