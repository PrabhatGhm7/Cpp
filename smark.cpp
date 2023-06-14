#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
        
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person {
    private:
        int rollNo;
        float marks;
    
    public:
        Student(string n, int a, int r, float m) : Person(n, a) {
            rollNo = r;
            marks = m;
        }
        
        void display() {
            Person::display();
            cout << "Display 1: " << rollNo << endl;
            cout << "Display 2: " << marks << endl;
        }
};

class Employee : public Person {
    private:
        float salary;
    
    public:
        Employee(string n, int a, float s) : Person(n, a) {
            salary = s;
        }
        
        void display() {
            Person::display();
            cout << "Display 3: " << salary << endl;
        }
};


int main() {
    Student s("prabhat", 19, 21, 75);
    Employee e("Ram", 45, 50000);
    cout << "Student Information:" << endl;
    s.display();
    cout << "Employee Information:" << endl;
    e.display();
}
