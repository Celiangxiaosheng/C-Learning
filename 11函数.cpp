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
//	* 1、作用
//	*	将一段经常使用的代码封装起来，减少重复代码
//	*	一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能
//	* 2、函数的定义
//	*	(1) 返回值类型
//	*	(2) 函数名
//	*	（3）参数列表
//	*	（4）函数体语句
//	*	（5）return表达式
//	* 3、常见的函数样式有四种
//	*	(1) 无参无返
//	*	(2) 有参无返
//	*	(3) 无参有返
//	*	(4) 有参有返
//	*/
//	/*double a, b;
//	cout << "请输入第一个数: " << endl;
//	cin >> a;
//	cout << "请输入第二个数: " << endl;
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

