#include<iostream>
using namespace std;

void swap(int num1, int num2);
void swap_1(int *p1, int *p2);

//int main()
//{
//	//ָ��ͺ���
//	//1��ֵ����
//	int a = 10;
//	int b = 20;
//	swap(a, b);//���ݲ���ı�ʵ��
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	//2����ַ����
//	//����ǵ�ַ���ݣ���������ʵ��
//	cout << "---------------------------" << endl;
//	swap_1(&a, &b);//���ݻ�ı�ʵ��
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
}
void swap_1(int* p1, int* p2)
{
	cout << "����ǰ��" << endl;
	cout << "*p1= " << *p1 << endl;
	cout << "*p2= " << *p2 << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "����ǰ��" << endl;
	cout << "*p1= " << *p1 << endl;
	cout << "*p2= " << *p2 << endl;
}
