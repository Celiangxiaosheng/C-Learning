#include<iostream>
using namespace std;


double add1(double a1, double b1)
{
	double c;
	c = a1 + b1;
	return c;
}

void test01()
{
	cout << "this is test01" << endl;
}
void test02(int a)
{
	cout << a << endl;
}
int test03()
{
	return 100;
}
int test04(int a)
{
	return a * 100;
}
//int main()
//{
//	/*
//	* 1������
//	*	��һ�ξ���ʹ�õĴ����װ�����������ظ�����
//	*	һ���ϴ�ĳ���һ���Ϊ���ɸ�����飬ÿ��ģ��ʵ���ض��Ĺ���
//	* 2�������Ķ���
//	*	(1) ����ֵ����
//	*	(2) ������
//	*	��3�������б�
//	*	��4�����������
//	*	��5��return���ʽ
//	* 3�������ĺ�����ʽ������
//	*	(1) �޲��޷�
//	*	(2) �в��޷�
//	*	(3) �޲��з�
//	*	(4) �в��з�
//	*/
//	/*double a, b;
//	cout << "�������һ����: " << endl;
//	cin >> a;
//	cout << "������ڶ�����: " << endl;
//	cin >> b;
//	cout << add1(a, b) << endl;*/
//
//	test01();
//	test02(10);
//	cout << "num= " << test03() << endl;
//	cout << "num2= " << test04(10) << endl;
//	system("pause");
//	return 0;
//}

