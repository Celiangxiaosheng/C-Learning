#include<iostream>
using namespace std;

int main()
{
	//1、空指针：指针变量指向内存中编号为0的空间
	int *p = NULL;
	//用途：初始化指针变量
	//注意：空指针指向的内存是不可以访问的,内存编号为0~255为系统占用内存，不允许用户访问
	//*p = 100;    此语句会报错
	//cout << *p << endl;   此语句会报错

	//2、野指针
	//double *p1 = (double)0x1100;

	//注意：一般情况下不要轻易使用空指针和野指针，容易使程序报错
	system("pause");
	return 0;
}