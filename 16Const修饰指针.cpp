#include<iostream>
using namespace std;
/*************************************
* 1、Const修饰指针的三种情况
*	（1）const修饰指针   ---常量指针
*		特点：指针的指向可以修改，但是指针指向的值不可以改
*	（2）const修饰指针   ---指针常量
*		特点：指针的指向不可以改，但指针指向的值可以改
*	（3）const即修饰指针，又修饰常量 
*		特点：指针的指向不可以改，但指针指向的值也不可以改
*************************************/
//int main()
//{
//	//(1)常量指针
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int d = 10;
//	const int* p1 = &a;
//	cout<< "c的值为：" << c << endl;
//	cout << "*p1= " << (int)p1 << endl;
//	p1 = &b;
//	//*p1 = 100;
//	cout << "*p1= " << (int)p1 << endl;
//	//(2)指针常量
//	int* const p2 = &c;
//	cout << "*p2= " << p2 << endl;
//	//p2 = &a;
//	*p2 = 100;
//	cout << "c的值为：" << c << endl;
//	cout << "*p2= " << p2 << endl;
//	//(3)
//	const int* const p3 = &d;
//	/*p3 = &c;
//	*p3 = 100;*/
//	system("pause");
//	return 0;
//}