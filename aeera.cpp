#include<iostream>
using namespace std;
class area
{
    public:
    int dim1 , dim2, a;
    area()
    {
        dim1=0;
        dim2=0;
    }
    area(int x, int y)
    {
        dim1 =x;
        dim2 = y;
    }
    virtual void ar()
    {
        
    }
};
class rectangle:public area
{
    public:
    rectangle(int len , int br):area(len , br){}
    void ar()
    {
        a = dim1 * dim2 ;
        cout<<"rectangle=   "<< a<<endl;
    }
};
class triangle:public area
{
    public:
    triangle(int base , int height):area(base , height){}
    void ar()
    {
        a = 1/2 * (dim1 * dim2);
        cout<<"triangle   "<<a<<endl;
    }
};
main()
{
    area *p;
    rectangle obj2(10,20);
    triangle obj3(5,2);
    p=&obj2;
    p->ar();
    p=&obj3;
    p->ar();
}
