#include<iostream>
using namespace std;
class person{
    static int voting_id;
    int age;
    char name[20],address[20];
    public:
    void getinfo(){
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter age "<<endl;
        cin>>age;
        cout<<"enter address"<<endl;
        cin>>address;
    }
    void display(){
        if(age>18){
            voting_id ++;
            cout<<"name = "<<name<<endl;
            cout<<"age = "<<age<<endl;
            cout<<"address = "<<address<<endl;
            cout<<"Voting id = "<<voting_id<<endl;
            
        }
        else{
            cout<<"name = "<<name<<endl;
            cout<<"age = "<<age<<endl;
            cout<<"address = "<<address<<endl;
            cout<<"Voting id = "<<voting_id<<endl;
        }
    }   
};
int person :: voting_id=0;
main(){
    person obj1 , obj2;
    obj1.getinfo();
    obj2.getinfo();
    obj1.display();
    obj2.display();
    
}
