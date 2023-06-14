#include<iostream>
#include<string.h>
using namespace std;

class Mountain {
public:
    int h;
    string n, l;

    Mountain() {}

    Mountain(int a, string b, string c) {
        h = a;
        n = b;
        l = c;
    }

    Mountain cmpheight(Mountain ob1, Mountain ob2) {
        if (ob1.h > ob2.h) {
            return ob1;
        }
        else {
            return ob2;
        }
    }

    void Display() {
        cout << "height  " << h << endl;
        cout << "name  " << n << endl;
        cout << "location   " << l << endl;
    }
};

int main() {
    Mountain obj1(5110, "Prabhat", "nepal");
    Mountain obj2(4110, "Shristi", "nepal");
    Mountain obj3 = obj3.cmpheight(obj1, obj2);
    obj3.Display();
}
