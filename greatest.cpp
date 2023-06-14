//greatest among 3 numbers
#include<iostream>
using namespace std;
class great {
    int a , b, c;
    public:
    void data()
    {
        cout<<"Enter three numbers"<<endl;
        cin >> a>>b>>c;
    }
    void check()
    {
        if (a>b && a>c)
        {
            cout<<"greatest number is"<< a<<endl;
        }
        else if (b>a && b>c)
        {
            cout<<"greatest number is"<< b<<endl;
        }
        else
        {
            cout<<"greatest number is"<< c<<endl;
        }
    }
};
int main()
{
    great op;
    op.data();
    op.check();  
}