#include <iostream>
#include <cmath>
using namespace std;

//you can try many others.
int main(int argc, char* argv[])
{
	int integer = 0123;
	short small = 128;
	unsigned short u_small = 255;
	unsigned int u_integer = -1;
	long long very_long = 0xFFFFFFFFFFFFF;
	float bad_decimal = 1.0e9f / 3.0f;
	double better_decimal = 1.0e9 / 3.0;

	char c = 'a';
	char c_zh = 'лл'; //this will fail

	cout << integer << endl;
	cout << small << endl;
	cout << u_small << endl;
	cout << u_integer << endl;
	cout << very_long << endl;
	cout << bad_decimal << endl;
	cout << better_decimal << endl;
	cout << c << endl;
	cout << c_zh << endl; //this will be empty

	//notice the difference 
	cout << c + 25 << endl;
	c += 25;
	cout << c << endl;

	cout << bad_decimal << endl;

	bad_decimal = sqrt(bad_decimal);
	bad_decimal = pow(bad_decimal, 2.0);

	cout << bad_decimal << endl;

	//notice the output
	if (bad_decimal * 3.0f == 1.0e9f)
	{
		cout << "exact equality" << endl;
	}
	else
	{
		cout << "not exact equality" << endl;
	}

	system("pause");
	return 0;
}
