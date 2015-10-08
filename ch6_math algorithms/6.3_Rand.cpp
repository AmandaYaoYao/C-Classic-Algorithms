#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/************************************************************************/
/* C�������ṩ��������������ɺ���                               
 * (1)α���������rand �� ���ڷ���һ��0~32767 ֮��������
 * (2)������Ӻ�����srand �� ������ʼ����������������������
/************************************************************************/

// ����[0 , 1] ֮��ľ��ȷֲ����������
// �����趨һ������ base=256.0 �Լ��������� u=17.0 v=139.0 ���л���baseһ��ȡ2��������������a��b���ݾ���ȡֵ
// ���յ��ƹ�ʽ Ri = mod(u*Ri-1 + v , base); Pi = Ri/base
double Rand01(double &r)
{
	double base, u, v, p, tmp1, tmp2, tmp3;
	base = 256.0;
	u = 17.0;
	v = 139.0;

	tmp1 = u * r + v; //������ֵ
	tmp2 = (int)(tmp1 / base);  //������
	tmp3 = tmp1 - tmp2*base; //��������

	r = tmp3;
	p = r / base;

	return p;
}

//u�Ǿ�ֵ��t�Ƿ���
double RandZT(double u, double t, double &r)
{
	double total = 0.0;
	double result;

	for (int i = 0; i < 12; ++i)
	{
		total += Rand01(r);
	}

	result = u + t*(total - 6.0);
	return result;
}

//int main()
//{
//	//(1) �����Ʒ�Χ�������
//
//	// ���������ʱ�亯��time(0)�����
//	srand((int)time(0));
//	cout << "5���������" << endl;
//	for (int i = 0; i < 5; i++)
//		cout << rand() << "\t";
//	cout << endl << endl;
//
//	//(2) ����100���ڵ������
//	cout << "5��100���ڵ������" << endl;
//	for (int i = 0; i < 5; i++)
//		cout << rand() % 100 << "\t";
//	cout << endl << endl;
//
//	//(3) ����[0 , 1]֮����ȷֲ��������
//	double r = 5.0;
//	cout << "5��[0,1]֮����������" << endl;
//	for (int i = 0; i < 5; i++)
//		cout << Rand01(r) << "\t";
//	cout << endl << endl;
//
//	//(4) �������ⷶΧ[m , n ]�������
//	// ���ù�ʽ m + (n - m)*Rand01(r)
//	double m = 10.0, n = 20.0;
//	cout << "5��[m=10.0,n=20.0]֮����������" << endl;
//	for (int i = 0; i < 5; i++)
//		cout << m + (n - m)*Rand01(r) << "\t";
//	cout << endl << endl;
//
//	//(5) ����[m , n]����ȷֲ�������
//	// ���ù�ʽ m + (int)(n - m)*Rand01(r)
//	int mm = 10, nn = 20;
//	cout << "5��[mm=10,nn=20]֮������������" << endl;
//	for (int i = 0; i < 5; i++)
//		cout << mm + (int)((nn - mm)*Rand01(r)) << "\t";
//	cout << endl << endl;
//
//	//(6) ��̬�ֲ��������
//	double u = 2.0, t = 3.5; r = 5.0;
//	cout << "5����̬�ֲ����������" << endl;
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << RandZT(u, t, r) << "\t";
//	}
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}