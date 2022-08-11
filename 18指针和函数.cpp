#include<iostream>
using namespace std;

void swap(int num1, int num2);
void swap_1(int *p1, int *p2);

//int main()
//{
//	//指针和函数
//	//1、值传递
//	int a = 10;
//	int b = 20;
//	swap(a, b);//传递不会改变实参
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	//2、地址传递
//	//如果是地址传递，可以修饰实参
//	cout << "---------------------------" << endl;
//	swap_1(&a, &b);//传递会改变实参
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl;
}
void swap_1(int* p1, int* p2)
{
	cout << "交换前：" << endl;
	cout << "*p1= " << *p1 << endl;
	cout << "*p2= " << *p2 << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "交换前：" << endl;
	cout << "*p1= " << *p1 << endl;
	cout << "*p2= " << *p2 << endl;
}
