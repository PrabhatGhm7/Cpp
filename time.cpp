#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s;

    Time() {}

    Time(int hour, int minute, int second) {
        h = hour;
        m = minute;
        s = second;
    }

    Time add(Time ob1, Time ob2) {
        Time temp;
        temp.h = ob2.h + ob1.h;
        temp.m = ob2.m + ob1.m;
        temp.s = ob2.s + ob1.s;
        if (temp.s >= 60) {
            temp.m += 1;
            temp.s -= 60;
        }
        if (temp.m >= 60) {
            temp.h += 1;
            temp.m -= 60;
        }
        return temp;
    }

    void display() {
        cout << "hour  " << h << endl;
        cout << "mins  " << m << endl;
        cout << "secs  " << s << endl;
    }
};

int main() {
    Time obj1(1, 50, 40);
    Time obj2(2, 30, 30);
    Time obj3;
    obj3.add(obj1, obj2);
    obj3.display();
}
