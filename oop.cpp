#include<iostream>
using namespace std;
class Rectangel {
    public:
    int len , br , ar;
    public:
    void calculate()
    { 
        ar = len * br;
        cout<<"the area is"<<" "<<ar<<endl;
    }
};
int main()
{
    Rectangel obj1;
    cout<<"Enter the length and breadth"<<endl;
    cin>>obj1.len>>obj1.br;
    obj1.calculate();

}
