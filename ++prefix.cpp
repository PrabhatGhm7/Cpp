#include <iostream>
using namespace std;

class MyNumber {
    int number;

public:
    MyNumber(int n) : number(n) {}

    // Overloading the prefix ++ operator
    MyNumber operator++() {
        ++number;
        return *this;
    }

    // Overloading the postfix ++ operator
    MyNumber operator++(int) {
        MyNumber temp = MyNumber(number);
        ++number;
        return temp;
    }

    void print() {
        cout << number << endl;
    }
};

int main() {
    MyNumber num1(5);
    ++num1;
    num1.print(); // Output: 6

    MyNumber num2(10);
    num2++;
    num2.print(); // Output: 11

    return 0;
}
