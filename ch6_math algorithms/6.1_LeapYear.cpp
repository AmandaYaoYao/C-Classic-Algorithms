#include <iostream>
#include <cstdlib>

using namespace std;

bool isLeapYear(int year)
{
	//���������жϹ��򣺣�1����������400 ��2����������100����������4
	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
	{
		return 1;
	}
	else
		return 0;
}

//int main()
//{
//	int year;
//	cout << "2000 �굽3000 ��֮�����е��������£�" << endl;
//
//	for (int year = 2000; year <= 3000; year++)
//	{
//		if (isLeapYear(year))
//			cout << year << "\t";
//	}
//
//	system("pause");
//	cout << endl;
//	return 0;
//}