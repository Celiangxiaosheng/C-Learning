#include<iostream>
using namespace std;
/*
* 1、作用：利用指针访问数组中的元素
*	
*/
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "数组中的第一个元素为：" << arr[0] << endl;
//
//	int* p = arr; //arr就是数组的首地址
//
//	cout << "利用指针访问第一个元素：" << *p << endl;
//	p++;//让指针向后偏移8个字节
//	cout << "利用指针访问第二个元素：" << *p << endl;
//
//
//	int* p2 = arr;
//	for (int i = 1; i < 11; i++)
//	{
//		cout << "利用指针访问第" << i << "个元素为：" << *p2 << endl;
//		p2++;
//	}
//
//	system("pause");
//	return 0;
//}