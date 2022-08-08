#include<iostream>
using namespace std;


//int main()
//{
//    //cout << "---------------break语句---------------" << endl;
//	//作用：跳出选择结构或循环结构
//	//作用时机:（1）switch 语句中,终止case并跳出switch
//	//			(2)在循环语句中,跳出当前循环语句
//	//			(3)在嵌套循环中,跳出最近的内层循环语句
//
//	/*cout << "请选择难度" << endl;
//	cout << "1、普通" << endl;
//	cout << "2、中等" << endl;
//	cout << "3、困难" << endl;
//	int select = 0;
//	cin >> select;
//	switch (select)
//	{
//	case 1:
//		cout << "您选择的是普通难度！" << endl;
//		break;
//	case 2:
//		cout << "那您选则的是中等难度！" << endl;
//		break;
//	case 3:
//		cout << "您选择的是困难难度！" << endl;
//		break;         
//	default:
//		break;
//	}*/
//
//	//跳出当前循环语句
//	/*for (int i = 1; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		cout << i << endl;
//	}*/
//
//	//退出内层循环
//	/*for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}*/
//
//	//cout << "--------------continue语句---------------" << endl;
//	//作用:在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
//
//	/*for (int i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		cout << i << endl;
//	}*/
//
//	//cout << "---------------goto语句---------------" << endl;
//	//作用：可以无条件跳转语句
//	//语法：goto 标记
//	//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
//
//
//	/*cout << "1、xxxxxxxx" << endl;
//	cout << "2、xxxxxxxx" << endl;
//	cout << "3、xxxxxxxx" << endl;
//	cout << "4、xxxxxxxx" << endl;
//	cout << "5、xxxxxxxx" << endl;
//	cout << "-------------使用goto------------" << endl;
//	cout << "1、xxxxxxxx" << endl;
//	cout << "2、xxxxxxxx" << endl;
//	goto FLAG;
//	cout << "3、xxxxxxxx" << endl;
//	cout << "4、xxxxxxxx" << endl;
//	FLAG:
//	cout << "5、xxxxxxxx" << endl;*/
//
//	system("pause");
//	return 0;
//}