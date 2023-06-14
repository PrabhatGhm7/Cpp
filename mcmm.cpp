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

    friend Distance add(Distance c1, Distance c2);

    ~Distance() {
        cout << "destructor is called" << endl;
    }
};

Distance add(Distance c1, Distance c2) {
    Distance temp;
    temp.m = c1.m + c2.m;
    temp.cm = c1.cm + c2.cm;

    if (temp.cm > 100) {
        temp.m += 1;
        temp.cm -= 100;
    }

    return temp;
}

int main() {
    Distance ob1(2, 90), ob2(1, 20);
    Distance result = add(ob1, ob2);
    cout << result.m << " " << result.cm << endl;
    return 0;
}
