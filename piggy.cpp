#include<iostream>
using namespace std;
class addamount
{
  int amount=50, amount1 , sum;
  public:
  addamount()
  {
    cout<<"the amount is "<<"\t"<<amount<<endl;
  }
  addamount(int x)
  {
    amount1 = x;
    sum = amount1 + amount;
    cout<<"total amount = "<<"\t"<<sum<<endl;
  }
};
int main()
{
   addamount obj1;
   addamount (100);
}