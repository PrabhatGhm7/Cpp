#include <iostream>
using namespace std;
class time
    {
	int hour, min, second, sec;
	public:
	time()
	{
		cout<<"Enter time in hour, min, and second"<<endl;
		
		cin>>hour>>min>>sec;
		
	}
	void calculate()
	{
		second=hour*60*60+min*60+sec;
		cout<<"total time "<<second <<endl;
		
	}
};
	int main()
	{
        time.obj1;
        obj1.calculate();
	}

