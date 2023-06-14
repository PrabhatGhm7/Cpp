#include <iostream>
using namespace std;

class Number {
    int value,product;
  public:
    Number(int v) 
    {
        value = v;
    }
    Number operator*(Number obj) 
        {
            obj.product= (value * obj.value);
            cout<<"The product is " << obj.product<<endl;
        }
    int getValue() 
        { 
            return value; 
        }
};

int main() {
    Number a(5);
    Number b(3);
    Number c = a * b;
}

