#include<iostream>
using namespace std;

//int main()
//{
//	//��ν����,����һ������,����������ͬ���͵�����Ԫ��
//	//�ص�1�������ÿ������Ԫ�ض�����ͬ����������
//	//�ص�2�����������������ڴ�λ����ɵ�
//	/*--------------------һά����-----------------------
//	* 1��һά���鶨������ַ�ʽ
//	* (1) �������� ������[ ���鳤�� ];
//	* (2) �������� ������[ ���鳤�� ] = { value 1, value 2.......};
//	* (3) �������� ������[] = { value 1, value 2........};
//	* 2��һά�������Ƶ���;
//	* (1).����ͳ�������������ڴ��еĳ���
//	*	sizeof(arrayName);
//	*	sizeof(arrayName[index]);
//	* (2).���Ի�ȡ�������ڴ��е��׵�ַ
//	*	&arrayName[index]; һ��Ϊ16����
//	*	(int)&arrayName[index]; ��16����ǿ��ת��Ϊ10����
//	* ע�⣺�������ǳ����������Խ��и�ֵ����
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
//	cout << "����arr��ռ�Ŀռ� = " << sizeof(arr) << endl;
//	cout << "����arr�е�һ��Ԫ����ռ�ռ� = " << sizeof(arr[0]) << endl;
//	cout << "�����е�Ԫ�ظ��� = " << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "����arr���׵�ַ��� = " << (int)arr << endl;
//	cout << "�����е�һ��Ԫ�ص��׵�ַ = " << (int)&arr[0] << endl;
//	cout << "�����еڶ���Ԫ�ص��׵�ַ = " << (int)&arr[1] << endl;*/
//	//��һ�������м�¼����ֻС������أ��ҳ�����ӡ���������
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
//	//ʵ����������
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	cout << "����Ԫ������ǰ��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	int start = 0;//��ʼ�±�
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;//��ֹ�±�
//
//	while (start < end)
//	{
//		//����
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		//update
//		start++;
//		end--;
//	}
//	cout << "����Ԫ�����ú�" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}