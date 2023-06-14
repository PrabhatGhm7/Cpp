#include<iostream>
using namespace std;
class Base {
 public:
  ~Base() {
        cout << "Base class destructor called." << std::endl;
  }
};

class Derived : public Base {
 public:
  ~Derived() {
        cout << "Derived class destructor called." << std::endl;
  }
};

int main() {
  {
    Derived d;          //Derived class destructor called followed by "Base class destructor called
  }        
  return 0;
}