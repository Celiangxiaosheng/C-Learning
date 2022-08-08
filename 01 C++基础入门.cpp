#include<iostream>
using namespace std;  
/********************************************************
* ----------------------SUMMARY--------------------------
* 1、c++中变量的定义
* 2、c++中定义常量的两种方法：(1)#define; (2)const
* 3、c++中标识符的命名规则：
*	(1)标识符不可以是关键字
*	(2)标识符是由字母、数字和下划线组成
*	(3)标识符第一个字符只能由字母或下划线组成
*	(4)标识符是区分大小写的
* 4、c++中的数据类型
*	整型：short(2) < int(4) <= long(4) <= long long(8)
*	实型（浮点型）：单精度：float(4) 表示7位有效数字
*		   双精度：double(8) 表示15~16位有效数字
*			科学计数法：3e2:  3 * 10 ^ 2
*					   2e-2: 3 * 0.1 ^ 2
*	默认情况下输出一个小数会显示6位有效数字
*	字符型：char ch = 'a';
*	字符串型：C语言风格         char[] 变量名 = "字符串值"
*			 C++语言风格       string[] 变量名 = "字符串值"
*	bool类型：true-----------真(本质是1)
*			 false----------假(本质是0)
********************************************************/
/*******************************************************
* 1、转义字符
*	\n:换行; 
*	\t:水平制表;   作用：强制对齐
*	\v:垂直制表; 
*	\\:反斜杠
* 2、三目运算符
*	语法：表达式1 ? 表达式2 : 表达式3
*	在c++中三目运算符返回的是变量，可以继续赋值
********************************************************/
/*******************************************************
**********************程序流程结构***********************
* 1、if语句
*	if(){}
*	if(){} else{}
*	if(){} else if(){} else{}
* 2、switch语句
*	switch(表达式)
*	{
*		case 结果1：执行语句;break;
*		case 结果2: 执行语句;break;
*		...............
*		default: 执行语句; break;
*	}
*	switch缺点,判断时候只能是整型或者字符型，不可以是区间
*	..... 优点,结构清晰,执行效率高
* 3、循环结构
*	(1)while(循环条件)
*	{
*		(循环语句)
	}
	解释：只要循环条件为真，就执行循环语句
	(2)do......while循环语句
	do
	{
		循环语句;
	}while(循环条件);
	Attention:与while 的区别在于do-while会先执行一次循环语句，再判断循环条件
**********************************************************/
#define Day 7
//int main()
//{
//	//cout << "一周总共有：" << Day << "天" << endl;
//	//const int month = 12;
//	//cout << "一年共有：" << month << "个月" << endl;
//	//整型
//	/*cout << "short 所占的内存空间：" << sizeof(short) << "byte" << endl;
//	cout << "int 所占的内存空间：" << sizeof(int) << "byte" << endl;
//	cout << "long 所占的内存空间：" << sizeof(long) << "byte" << endl;
//	cout << "longlong 所占的内存空间：" << sizeof(long long) << "byte" << endl;*/
//	//浮点
//	/*cout << "float 所占的内存空间：" << sizeof(float) << "byte" << endl;
//	cout << "double 所占的内存空间：" << sizeof(double) << "byte" << endl;*/
//	//字符
//	//cout << "char 所占的内存空间：" << sizeof(char) << "byte" << endl;
//	//布尔
//	/*cout << "bool类型所占的内存空间：" << sizeof(bool) << "byte" << endl;
//	char ch1 = 'a';
//	char ch2 = 'A';*/
//	/*cout << "a对应的ASCII码为：" << (int)ch1 << endl;
//	cout << "A对应的ASCII码为：" << (int)ch2 << endl;*/
//	float f1 = 3.14f;
//	//转义字符
//	/*cout << "a\tb\n";
//	cout << "aa\tb" << endl;
//	cout << "aaa\tb" << endl;
//	cout << "aaaa\tb" << endl;
//	cout << "aaaaa\tb" << endl;
//	cout << "aaaaaa\tb" << endl;
//	cout << "aaaaaaa\tb" << endl;*/
//	//输入
//	//1、整型
//	//int a = 0;
//	//cout << "请给整型变量a赋值：" << endl;
//	//cin >> a;
//	//cout << "整型变量a=" << a << endl;
//	////2、浮点型
//	//float f = 3.14f;
//	//cout << "请给浮点型变量f赋值：" << endl;
//	//cin >> f;
//	//cout << "浮点型变量f=" << f << endl;
//	//3、字符型
//	/*char chr = 'a';
//	cout << "请给字符型变量chr赋值：" << endl;
//	cin >> chr;
//	cout << "字符型变量chr =" << chr << endl;*/
//	////4、字符串型
//	//string  str = "xust";
//	//cout << "请给字符型变量chr赋值：" << endl;
//	//cin >> str;
//	//cout << "字符型变量chr =" << str << endl;
//	/*int num = 0;*/
//	/*while (num < 10)
//	{
//		cout << num << endl;
//		num++;
//	}*/
//	int num;
//	//添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//	int var = rand() % 100 + 1;//随机生成一个数字在1~100内
//	cout << "请输入一个1-100内的数:" << endl;
//	while (true)
//	{
//		cin >> num;
//		if (num > var)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if(num < var)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
//			break; //利用该关键字退出循环
//		}
//	}
//	//2022-8-5 0:13------------第34节
//	system("pause");
//	return 0;
//}

