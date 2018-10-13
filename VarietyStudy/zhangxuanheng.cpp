#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int integer = 2 / 3;
	float emm = 1.0f / 3;
	cout << integer << endl;
	cout << emm << endl;
	if(emm * 3 == 1)
	{
		cout << "extractly equal " << endl;
	}
	else
	{
		cout << "not extractly cqual" << endl;
	}
	system("pause");
	return 0;
}