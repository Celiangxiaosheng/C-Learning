#include<iostream>
using namespace std;

//int main()
//{
//	//1、定义一个指针
//	double a = 10;
//	//指针定义的语法： 数据类型 * 指针变量名
//	double *p;
//	p = &a;
//	cout << "a的地址为：" << &a << endl;
//	cout << "指针p为：" << p << endl;
//	
//	//2、使用指针
//	//可以通过指针解引用的方式来找到指针指向的内存
//	//指针前加 * 代表解引用，找到指针指向的内存中的数据
//
//	*p = 100;
//
//	cout << "a= " << a << endl;
//	cout << "*p= " << *p << endl;
//
//	//在32位操作系统下指针占4个字节，在64位操作系统下指针占8个字节
//
//	cout << "int型指针p所占的内存空间：" << sizeof(int *) << endl;
//	cout << "float型指针p所占的内存空间：" << sizeof(float *) << endl;
//	cout << "double型指针p所占的内存空间：" << sizeof(double *) << endl;
//	cout << "char型指针p所占的内存空间：" << sizeof(char *) << endl;
//	cout << "bool型指针p所占的内存空间：" << sizeof(bool *) << endl;
//
//	system("pause");
//	return 0;
//}