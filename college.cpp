#include<iostream>
#include<string.h>
using namespace std;
class University{
    public:
    string name , location;
    University(){
        name= "Pokhara university";
        location = "pokhara";
    }
    void display1(){
        cout<<      "....University...." <<endl;
        cout<<"University is  "<<name <<"\n"<<"Location is  "<<location<<endl;
        cout<<""<<endl;
    }
};
class Affiliated : virtual public University{
    public:
    string n , a ;
    int p;
    Affiliated(){
        n = "NCIT";
        a = "ktm";
        p = 4;
    }
    void display2(){
        cout<<      "....Affiliated...."<<endl;
        cout<<"name of affiliate is   "<<n<<"\n"<<"location is   "<<a <<"\n"<<"no of program is   "<<p <<endl;
        cout<<""<<endl;
    }
};
class Constituent: virtual public University{
    public:
    string s , d;
    int p2;
    Constituent(){
        d = "ram";
        s = "soe";
        p2 = 5;
    }
    void display3(){
        cout<<      "....SOE...."<<endl;
        cout<<"name os school   "<<s<<"\n"<<"name of dean   "<<d <<"\n"<<"number of program" << p2 <<endl;
        cout<<""<<endl;
    }
};
class Student: public Affiliated , public Constituent{
    public:
    string nm , pr;
    int y;
    Student(){
        nm = "Prabaht";
        pr = "BCE";
        y = 2079;
    }
    void display4(){
        cout<<      "....Student details...."<<endl;
        cout<<"name  "<<nm<<endl;
        cout<<"program  "<<pr<<endl;
        cout<<"year  "<<y<<endl;
    }
};
main(){
    Student obj;
    obj.display1();
    obj.display2();
    obj.display3();
    obj.display4();
}