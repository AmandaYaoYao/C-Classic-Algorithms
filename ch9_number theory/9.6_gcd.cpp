#include <iostream>
#include <cstdlib>

using namespace std;

/*
* շת����������Լ��
*/

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else if (a % b == 0)
	{
		return b;
	}
	else if (b % a == 0)
	{
		return a;
	}
	else{
		return gcd(b, a % b);
	}
}

int main()
{
	cout << gcd(13, 0) << endl;

	system("pause");
	return 0;
}