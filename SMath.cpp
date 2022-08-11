#include<iostream>
using namespace std;
#include"SMath.h";

/*
* 1��������׺��Ϊ.h��ͷ�ļ�
* 2��������׺��Ϊ.cpp��Դ�ļ�
* 3����ͷ�ļ���д����������
* 4����Դ�ļ���д�����Ķ���
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


