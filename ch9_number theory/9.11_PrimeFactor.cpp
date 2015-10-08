#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


/*
* �κ�һ������������д�ɼ���������˵���ʽ���⼸����������Ϊ���������������
* ����ʵ�ַֽ��������㷨
*/

//�ж�����
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
			return false;
	}//for
	return true;
}

//�ֽ�������
vector<int> PrimeFactor(int n)
{
	//���������������䱾��
	if (isPrime(n))
	{
		return vector<int>(1, n);
	}

	vector<int> ret;
	for (int i = 2; i <= n; ++i)
	{
		if (n % i == 0 && isPrime(i))
		{
			ret.push_back(i);
			n /= i;
		}
	}//for

	return ret;
}

//int main()
//{
//	vector<int> ret = PrimeFactor(1155);
//	for (size_t i = 0; i < ret.size(); ++i)
//		cout << ret[i] << "\t";
//	cout << endl;
//	system("pause");
//	return 0;
//}