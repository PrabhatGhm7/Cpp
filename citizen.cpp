#include<iostream>
using namespace std;
class person{
    char name[20],address[20];
    int age , citizenship_num ;
    public:
    void assign(){
        cout<<"enter name address and age"<<endl;
        cin>>name>>address>>age;
    }
    void check(){
        if (age>16){
            cout<<"Enter citizenship number";
            cin>>citizenship_num;
        }
        else{
            citizenship_num = 0;
        }
    }
    void display(){
        cout<<"\n"<<endl;
        cout<<"Name:"<<"\t"<<name<<"\n"<<"Address:"<<"\t"<<address<<"\n"<<"Age:"<<"\t"<<age<<"\n"<<"Citizenship Number:"<<"\t"<<citizenship_num<<endl;
    }
};
int main()
{
    person obj1;
    obj1.assign();
    obj1.check();
    obj1.display();
}
