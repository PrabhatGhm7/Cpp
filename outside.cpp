//outside the class
#include<iostream>
using namespace std;
class add{
    public:
    int a , b , sum;
    int getNum();
    int ShowData();
};
int add::getNum(){
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
}
int add::ShowData(){
    sum = a+b;
    cout<<"the sum is"<<" "<<sum<<endl;
}
int main()
{
    add obj;
    obj.getNum();
    obj.ShowData();
}
