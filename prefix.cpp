#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test()
    {
        n=5;
    }
    int shownum()
    {
        return n;
    }
    test operator ++(int)
    {
        test temp;
        temp.n = n++;
        return temp;
    }
};
main()
{ 
test obj;
cout<<"before"<<"\t"<<obj.shownum()<<endl;
obj++;
cout<<"after"<<"\t"<<obj.shownum()<<endl;
}