#include <iostream>
using namespace std;

class A {
    int a;
public:
    void getdata() {
        cout << "Enter value of A: ";
        cin >> a;
    }
    friend int Great(A, B, C, D);
};

class B {
    int b;
public:
    void getdata() {
        cout << "Enter value of B: ";
        cin >> b;
    }
    friend int Great(A, B, C, D);
};

class C {
    int c;
public:
    void getdata() {
        cout << "Enter value of C: ";
        cin >> c;
    }
    friend int Great(A, B, C, D);
};

class D {
    int d;
public:
    void getdata() {
        cout << "Enter value of D: ";
        cin >> d;
    }
    friend int Great(A, B, C, D);
};

int Great(A objA, B objB, C objC, D objD) {
    int greatest = objA.a;
    if (objB.b > greatest)
        greatest = objB.b;
    if (objC.c > greatest)
        greatest = objC.c;
    if (objD.d > greatest)
        greatest = objD.d;
    return greatest;
}










int main() {
    A objA;
    B objB;
    C objC;
    D objD;
    objA.getdata();
    objB.getdata();
    objC.getdata();
    objD.getdata();
    int greatest = Great(objA, objB, objC, objD);
    cout << "The greatest number is " << greatest << endl;
    return 0;
}
