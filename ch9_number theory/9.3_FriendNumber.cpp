#include <iostream>
#include <cstdlib>

using namespace std;

/************************************************************************/
/*
* �������������������a,b ����a�������Ӻ͵���b �� b�������Ӻ͵���a ����
* ���߳�Ϊ������
*/
/************************************************************************/

//��һ������������
int friendNum(int &a)
{
	//ѭ������1~num/2���������Ӻ�
	int b = 0;
	for (int i = 1; i <= a / 2; ++i)
	{
		if (a % i == 0)
		{
			b += i;
		}
	}//for
	
	//�Ը����Ӻͽ�����ʽ�ֽ�
	int sum = 0;
	for (int j = 1; j <= b / 2; ++j)
	{
		if (b % j == 0)
			sum += j;
	}
	//�����ظ�����a<bɸѡ
	if (sum == a && a < b)
		return b;
	else
		return 0;
}

//int main()
//{
//	cout << "�ҳ�1~10000�ڵ�������ȫ����" << endl;
//	for (int i = 0; i < 10000; i++)
//		if (friendNum(i) != 0)
//			cout << "[ " << i << " , " << friendNum(i) << " ]" << endl;
//	cout << endl;
//	system("pause");
//	return 0;
//}