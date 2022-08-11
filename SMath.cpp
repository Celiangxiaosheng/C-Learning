#include<iostream>
using namespace std;
#include"SMath.h";

/*
* 1、创建后缀名为.h的头文件
* 2、创建后缀名为.cpp的源文件
* 3、在头文件中写函数的声明
* 4、在源文件中写函数的定义
*/
double Azimuth(double x1, double y1, double x2, double y2)
{
	double azimuth;
	double dx = x2 - x1;
	double dy = y2 - y1;
	azimuth = atan2(dx, dy) + (dy < 0 ? 1 : 0) * 2 * 3.14;
	return azimuth;
}
//int main()
//{
//	double x1 = 10, y1 = 2,x2 = 2,y2 = 3;
//	cout << Azimuth(x1,y1,x2,y2) << endl;
//	system("pause");
//	return 0;
//}


