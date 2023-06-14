#include<iostream>
using namespace std;
class Minus{
    int x;
    public:
    Minus(){}
    Minus(int x){
        this->x = x;
    }
    //void operator - (){
    //    x = -x;
    //}
    friend Minus operator - (Minus);
    void display(){
        cout<<x;
    }
};
Minus operator -(Minus ob1){
    Minus temp;
    temp.x = - ob1.x;
    return temp;
}
main()
{
    Minus ob3(10) ;
    Minus ob4;
    ob4 = -ob3;
    ob3.display();
}