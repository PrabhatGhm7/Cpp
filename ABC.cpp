#include <iostream>
using namespace std;
//Abstract base class with a pure virtual function
class Base
{
public:
    virtual int calculate(int a, int b) = 0;
};

//Derived class that implements pure virtual function
class Derived : public Base
{
protected:
    int sum;
public:
    int calculate(int a, int b) 
    {
        sum = a + b;
        cout<<"The sum is = "<<sum<<endl;
    }
};
//second derived class 
class Derived2 : public Base{
    protected:
        int multiply;
    public:
        int calculate(int a , int b)
        {
            multiply = a * b;
            cout<<"The product is = "<<multiply<<endl;
        }
};

int main()
{
    Base* obj;
    Derived s;
    Derived2 m;
    obj = &s;
    obj = &m;
    s.calculate(10,20);
    m.calculate(15,17);
}


