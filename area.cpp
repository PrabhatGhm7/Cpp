//area of rectangle
#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length , breadth , area;
    public:
    void getdata()
    {
        cout<<"Enter the length and breadth"<<endl;
        cin>>length>>breadth;
    }
    void calculate()
    { 
        area = length * breadth;
        cout<<"the area is"<<" "<<area<<endl;
    }
};
int main()
{
    Rectangle obj1;
    obj1.getdata();
    obj1.calculate();
}
