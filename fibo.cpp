//Fibonacci series
#include<iostream>
using namespace std;
class fibo {
    int n,a=0,b=1,c,i;
    public:
    void GetN(){
        cout<<"enter value of nth term"<<endl;
        cin>>n;
    }
    void loop(){
        cout<<a<<","<<b<<",";
        for(i=0;i<n-2;i++){
            c= a + b;
            cout<<c<<",";   
            a=b;
            b=c;
        }
    }
};
int main()
{
    fibo ob1;
    ob1.GetN();
    ob1.loop();
}

