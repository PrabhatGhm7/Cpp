#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string a, int b) {
        name =a;
        age=b; 
    }
    

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int student_id;

public:
    Student(string name, int age, int student_id) : Person(name, age), student_id(student_id) {}

    void display() {
        Person::display();
        cout << "Student ID: " << student_id << endl;
    }
};

class Employee : public Person {
private:
    int employee_id;

public:
    Employee(string name, int age, int employee_id) : Person(name, age), employee_id(employee_id) {}

    void display() {
        Person::display();
        cout << "Employee ID: " << employee_id << endl;
    }
};

int main() {
    Person p("John Doe", 30);
    p.display();
    cout << endl;

    Student s("Jane Smith", 20, 12345);
    s.display();
    cout << endl;

    Employee e("Bob Johnson", 40, 67890);
    e.display();
    cout << endl;

    return 0;
}
