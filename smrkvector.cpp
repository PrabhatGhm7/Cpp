





#include <iostream>
#include <cmath>
using namespace std;

class Base {
    protected:
        double x1, y1 , x2 , y2;
        
    public:
        void getdata() {
            cout << "Enter vector coordinates (x1, y1): ";
            cin >> x1 >> y1;
            cout << "Enter vector coordinates (x2, y2): ";
            cin >> x2 >> y2;
        }
};















class Derived : public Base {
    private:
        double n1 , n2;
    public:
        void add_vector() {
            n1 = x1+x2;
            n2 = y1+y2;
        }
        friend void display(Derived);
};

void display(Derived obj) {
    cout << obj.n1 <<" + "<<"i"<< obj.n2 << endl;
}












int main() {
    Derived d;
    d.getdata();
    d.add_vector();
    display(d);
}
