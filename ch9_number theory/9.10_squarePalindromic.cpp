#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

/*
* ƽ����������һ����������������������Ա�ʾ��һ����Ȼ����ƽ��
*/

//�ж� ��Ȼ��nƽ���Ƿ���ƽ��������
bool SquarePalindromic(int n)
{
	long ret = n * n;

	vector<int> v;
	while (ret / 10 != 0)
	{
		v.push_back(ret % 10);
		ret /= 10;
	}//while

	int lhs = 0, rhs = v.size() - 1;
	while (lhs < rhs)
	{
		if (v[lhs] != v[rhs])
			return false;
		++lhs;
		--rhs;
	}
	return true;
}

bool isSquarePalindromic(int n)
{
	int ret = sqrt(n);
	//������ĳ����Ȼ����ƽ����һ����
	if (ret != 0 && n == ret * ret)
	{
		vector<int> v;
		while (n != 0)
		{
			v.push_back(n % 10);
			n /= 10;
		}//while

		int lhs = 0, rhs = v.size() - 1;
		while (lhs < rhs)
		{
			if (v[lhs] != v[rhs])
				return false;
			++lhs;
			--rhs;
		}
		return true;
	}
	else
		return false;	
}


//int  main()
//{
//	cout << "�ҳ�1~1000�ڵ�����ƽ��������" << endl;
//	for (int i = 1; i < 1000; ++i)
//		if (isSquarePalindromic(i))
//			cout << i << '\t';
//	cout << endl;
//
//	system("pause");
//	return 0;
//}