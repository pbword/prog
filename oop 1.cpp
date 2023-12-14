#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		
		complex operator +(complex c2)
		{
			complex temp;
			temp.real=real+c2.real;
			temp.imag=imag+c2.imag;
			
			return temp;
		}
		complex operator * (complex c2)
		{
			complex temp;
			temp.real=(real*c2.real)-(imag*c2.imag);
			temp.imag=(real*c2.imag)+(imag*c2.real);
			
			return temp;
		}
		friend ostream &operator<<(ostream &output,const complex &D)
		{
			output<<D.real<<"+"<<D.imag<<"i";
			return output;
		}
		friend istream &operator>>(istream &input,complex &D)
		{
			input>>D.real>>D.imag;
			return input;
		}
		
};
int main()
{
	complex c1,c2,result;
	cout<<"Enter the real and imaginary part of first complex number=";
	cin>>c1;
	cout<<"Enter the real and imaginary part of the second complex number=";
	cin>>c2;
	result=c1+c2;
	cout<<"\n The addition of two complex number is ="<<result;
	result=c1*c2;
	cout<<"\n The multiplication of two complex number is ="<<result;
	
	return 0;
}
