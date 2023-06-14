#include <iostream>

using namespace std;

class Person {
    protected:
        char name[20];
        int age;
    
    public:
        Person() {
            cout << "Enter name: ";
            cin>>name;
            
            cout << "Enter age: ";
            cin >> age;
            
        }
        
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person 
{
    private:
        int rollNo;
        float marks;
    
    public:
        Student() //:Person() 
        {
            cout << "Enter roll no.: ";
            cin >> rollNo;
            
            cout << "Enter marks: ";
            cin >> marks;
        }
        
        void display() {
            Person::display();
            cout << "Roll No.: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};

class Employee : public Person {
    private:
        float salary;
    Person f;
    public:
        Employee() //:Person() 
        {
            cout << "Enter salary: ";
            cin >> salary;
        }
        
        void display() {
            f.display();
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Student s;
    Employee e;
    
    s.display();
    e.display();
    
    return 0;
}