#include <iostream>
#include <cstdlib>

using namespace std;

/************************************************************************/
/* 
* ��ȫ�����������������ӵĺ�
* ����ȫ����ص��������
* ��������һ����Ȼ�������������ӵĺ�С�ڸ���Ȼ������Ϊ����
* ӯ������һ����Ȼ�������������ӵĺʹ��ڸ���Ȼ������Ϊӯ��
*/
/************************************************************************/

//�ж���ȫ��
bool judgePerfect(long &num)
{
	//ѭ������1~num/2����������
	long sum = num;
	for (int i = 1; i <= num / 2; ++i)
	{
		if (num % i == 0)
		{
			sum -= i;
		}
	}//for
	if (0 == sum)
		return true;
	else
		return false;
}

//int main()
//{
//	cout << "�ҳ�1~1000�ڵ�������ȫ����" << endl;
//	for (long i = 0; i < 10000; i++)
//		if (judgePerfect(i))
//			cout << i << "\t";
//	cout << endl;
//	system("pause");
//	return 0;
//}