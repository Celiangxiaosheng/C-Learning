#include<iostream>
using namespace std;
/******************************************************
* *******************SUMMARY***************************
* 大纲：(1)选择结构   (2) 循环结构 (3)跳转语句
* ****************Part one: select structure***********
* ------------IF语句-----------------------------------
*   (1)if(判断条件)
	   {
			执行语句;
	   }
*   (2)if(判断条件)
	   {
			执行语句;
	   }
	   else
	   {
			执行语句;
	   }
	(3)if(判断条件1)
	   {
			执行语句;
	   }
	   else if(判断条件2)
	   {
			执行语句;
	   }
	   .    .    .
	   .    .    .
	   .    .    .
	   else if(判断条件n)
	   {
			执行语句;
	   }
	   else
	   {
			执行语句;
	   }
* -----------SWITCH语句----------------------------------
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
* ***********Part two: loop structure******************
* -----------While循环---------------------------------
* (1)while(循环条件)
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
* -----------for循环---------------------------------
* 格式：for(起始表达式;条件表达式;末尾循环体){ 循环体 }
* 
******************************************************/
//int main()
//{
//	int num2 = 100;
//	do
//	{
//		int baiwei = 0;
//		int shiwei = 0;
//		int gewei = 0;
//		baiwei = num2 / 100;
//		shiwei = num2 / 10 % 10;
//		gewei = num2 % 10;
//		int num = gewei * gewei * gewei + shiwei * shiwei * shiwei + baiwei * baiwei * baiwei;
//		if (num == num2)
//		{
//			cout << num2 << endl;
//		}		
//		num2++;
//
//	} while (num2 < 1000);
//	/*do
//	{		 
//		cout << "请输入一个三位数:" << endl;
//		int num;
//		cin >> num;
//		int baiwei = num / 100;
//		int shiwei = (num - baiwei * 100) / 10;
//		int gewei = num - baiwei * 100 - shiwei * 10;
//		cout << "您所输入的数为:" << num << endl;
//		cout << "个位:" << gewei << endl;
//		cout << "十位:" << shiwei << endl;
//		cout << "百位:" << baiwei << endl;
//		int num1 = gewei ^ 3 + shiwei ^ 3 + baiwei ^ 3;
//		if (num1 == num)
//		{
//			cout << "您输入的数是水仙花数。" << endl;
//		}
//		else
//		{
//			cout << "您输入的数不是水仙花数。" << endl;
//		}
//	} while (true);	*/
//	system("pause");
//	return 0;
//}