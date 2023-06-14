//complex
#include <iostream>
using namespace std;

class Complex {
   private:
      float real;
      float imag;
   public:



      Complex(){
        real = 0;
        imag =0;
      }












      Complex(float r , float i ) {
         real = r;
         imag = i;
      }
     /*
     void display() {
         cout << real << "+" << imag << "i" << endl;
      }
     */ 

      friend Complex add(Complex c1, Complex c2);
      /*
      syntax : friend ClassName Friend_Function_Name(parameters)
      */
};
Complex add(Complex c1, Complex c2) {
   Complex temp;
   temp.real = c1.real + c2.real;
   temp.imag = c1.imag + c2.imag;
   //return temp;
   cout << temp.real << "+" << temp.imag << "i" << endl;
}
int main() {
   Complex obj1(3, 4), obj2(5, 6);
   add(obj1, obj2);
}
