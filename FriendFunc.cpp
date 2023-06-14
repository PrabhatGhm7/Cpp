#include<iostream>
using namespace std;
class demo
{
    int n;
    public:
    void getdata()
    {
        cout<<"Enter n "<<endl;
        cin>>n;
    }
    friend void square(demo);
};
void square(demo obj)
{
    int sq;
    sq = obj.n * obj.n;
    cout<<"Square is ="<<sq;
}
main()
{
    demo obj1;
    obj1.getdata();
    square(obj1);
}