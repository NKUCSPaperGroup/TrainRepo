#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double R,L,X,Y;
	const double PI=3.14;
	cout<<"Please input radius."<<endl;
	cin>>R;
	cout<<"The circumference of the circle is"<<2*PI*R<<endl;
	cout<<"The area of the circle is"<<PI*R*R<<endl;
	cout<<"Please input the side length of the square."<<endl;
	cin>>L;
	cout<<"The circumference of the square is"<<4*L<<endl;
	cout<<"The area of the square is"<<L*L<<endl;
	cout<<"Please input the side length of the rectangle."<<endl;
	cin>>X;
	cin>>Y;
	cout<<"The circumference of the rectangle is"<<2*X+2*Y<<endl;
	cout<<"The area of the rectangle is"<<X*Y<<endl;
	system("pause");
	return 0;
}


