//volume calculation
#include<iostream>
using namespace std;
class box{
    private:
    int length, breadth , height,vol;
    public:
    void readData(){
        cout<<"Enter Length breadth and height"<<endl;
        cin>>length>>breadth>>height;
    }
    int ShowVolume(){
        vol = length*breadth*height;
        return vol;
    }
};
int main()
{
    box obj1;
    obj1.readData();
    cout<<"the area is"<<" "<<obj1.ShowVolume()<<endl;
}
