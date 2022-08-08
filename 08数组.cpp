#include<iostream>
using namespace std;

//int main()
//{
//	//所谓数组,就是一个集合,里面存放了相同类型的数据元素
//	//特点1：数组的每个数据元素都是相同的数据类型
//	//特点2：数组是由连续的内存位置组成的
//	/*--------------------一维数组-----------------------
//	* 1、一维数组定义的三种方式
//	* (1) 数据类型 数组名[ 数组长度 ];
//	* (2) 数据类型 数组名[ 数组长度 ] = { value 1, value 2.......};
//	* (3) 数据类型 数组名[] = { value 1, value 2........};
//	* 2、一维数组名称的用途
//	* (1).可以统计整个数组在内存中的长度
//	*	sizeof(arrayName);
//	*	sizeof(arrayName[index]);
//	* (2).可以获取数组在内存中的首地址
//	*	&arrayName[index]; 一般为16进制
//	*	(int)&arrayName[index]; 将16进制强制转换为10进制
//	* 注意：数组名是常量，不可以进行赋值操作
//	---------------------------------------------------*/
//	/*int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;*/
//
//	/*cout << arr[0] << endl;
//	cout << arr[1] << endl;
//	cout << arr[2] << endl;
//	cout << arr[3] << endl;
//	cout << arr[4] << endl;*/
//	/*for (int i = 0; i <= 4; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << endl;
//
//	int arr2[5] = { 10, 20, 30, 40, 50 };*/
//	/*cout << arr2[0] << endl;
//	cout << arr2[1] << endl;
//	cout << arr2[2] << endl;
//	cout << arr2[3] << endl;
//	cout << arr2[4] << endl;*/
//	/*for (int i = 0; i <= 4; i++)
//	{
//		cout << arr2[i] << endl;
//	}
//	cout << endl;
//
//
//	int arr3[] = { 10, 20, 30, 40, 50, 60, 70};*/
//	/*cout << arr3[0] << endl;
//	cout << arr3[1] << endl;
//	cout << arr3[2] << endl;
//	cout << arr3[3] << endl;
//	cout << arr3[4] << endl;*/
//	/*for (int i = 0; i < 7; i++)
//	{
//		cout << arr3[i] << endl;
//	}
//	cout << endl;
//
//	cout << "数组arr所占的空间 = " << sizeof(arr) << endl;
//	cout << "数组arr中第一个元素所占空间 = " << sizeof(arr[0]) << endl;
//	cout << "数组中的元素个数 = " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "数组arr的首地址编号 = " << (int)arr << endl;
//	cout << "数组中第一个元素的首地址 = " << (int)&arr[0] << endl;
//	cout << "数组中第二个元素的首地址 = " << (int)&arr[1] << endl;*/
//	//在一个数组中记录了五只小猪的体重，找出并打印体重最轻的
//
//	/*int pig[] = { 100, 200, 300 , 400, 500 };
//	int temp = pig[0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (pig[i] < temp)
//		{
//			temp = pig[i];
//		}
//	}
//	cout << temp << endl;*/
//
//	//实现数组逆置
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	cout << "数组元素逆置前：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	int start = 0;//起始下标
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//终止下标
//
//	while (start < end)
//	{
//		//互换
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		//update
//		start++;
//		end--;
//	}
//	cout << "数组元素逆置后：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}