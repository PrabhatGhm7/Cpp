#include <iostream>
using namespace std;

class Distance {
    int m, cm;
public:
    Distance() {
        m = 0;
        cm = 0;
    }
    Distance(int a, int b) {
        m = a;
        cm = b;
    }

    friend Distance add(Distance d1, Distance d2);

    ~Distance() {
        cout << "destructor is called" << endl;
    }
};

Distance add(Distance d1, Distance d2) {
    Distance temp;
    temp.m = d1.m + d2.m;
    temp.cm = d1.cm + d2.cm;

    if (temp.cm > 100) {
        temp.m += 1;
        temp.cm -= 100;
    }

    cout<<"m =  "<<temp.m<<"\n"<< "cm =  "<<temp.cm<<endl;
}

int main() {
    Distance ob1(2, 90), ob2(1, 20);
    add(ob1, ob2);
}
