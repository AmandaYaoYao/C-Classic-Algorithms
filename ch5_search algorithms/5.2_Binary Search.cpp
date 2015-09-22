#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 12;

/*
* �����㷨�ĵ�һ�ַ������۰룬�����²��Ҵ���nlogn �� ����Ч�ʸ���˳�����
*/
int BinarySearch(const vector<int> &nums, const int &x)
{
	if (nums.empty())
		return -1;

	int len = nums.size();

	int lhs = 0, rhs = len - 1;
	while (lhs <= rhs)
	{
		int mid = (lhs + rhs) / 2;
		if (x == nums[mid])
		{
			return mid;
		}else if (nums[mid] < lhs)
		{
			lhs = mid + 1;
		}
		else{
			rhs = mid - 1;
		}
	}//while
	return -1;
}

int main()
{
	vector<int> v;

	srand(time(NULL));

	for (int i = 0; i < N; i++)
	{
		v.push_back(rand() % 100);
	}//for

	cout << "�������У�" << endl;
	for (int i = 0; i < N; i++)
		cout << v[i] << "\t";
	cout << endl;

	cout << "�����" << endl;
	sort(v.begin(), v.end());
	
	cout << "�������У�" << endl;
	for (int i = 0; i < N; i++)
		cout << v[i] << "\t";
	cout << endl;

	cout << "����50 �� ";
	int pos = BinarySearch(v, 50);
	if (-1 == pos)
		cout << "������" << endl;
	else
		cout << pos << endl;

	system("pause");
	return 0;

}