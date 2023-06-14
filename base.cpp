#include<iostream>
using namespace std;
class Base {
 public:
  Base() {
        cout << "Base class constructor called." << std::endl;
  }
};

class Derived : public Base {
 public:
  Derived() {
        cout << "Derived class constructor called." << std::endl;
  }
};

int main() {
  Derived d;  // base class constructor called followed by "Derived class constructor 
  return 0;
}
