#include<iostream>
using namespace std;
/******************************************************
* *******************SUMMARY***************************
* ��٣�(1)ѡ��ṹ   (2) ѭ���ṹ (3)��ת���
* ****************Part one: select structure***********
* ------------IF���-----------------------------------
*   (1)if(�ж�����)
	   {
			ִ�����;
	   }
*   (2)if(�ж�����)
	   {
			ִ�����;
	   }
	   else
	   {
			ִ�����;
	   }
	(3)if(�ж�����1)
	   {
			ִ�����;
	   }
	   else if(�ж�����2)
	   {
			ִ�����;
	   }
	   .    .    .
	   .    .    .
	   .    .    .
	   else if(�ж�����n)
	   {
			ִ�����;
	   }
	   else
	   {
			ִ�����;
	   }
* -----------SWITCH���----------------------------------
* 2��switch���
*	switch(���ʽ)
*	{
*		case ���1��ִ�����;break;
*		case ���2: ִ�����;break;
*		...............
*		default: ִ�����; break;
*	}
*	switchȱ��,�ж�ʱ��ֻ�������ͻ����ַ��ͣ�������������
*	..... �ŵ�,�ṹ����,ִ��Ч�ʸ�
* ***********Part two: loop structure******************
* -----------Whileѭ��---------------------------------
* (1)while(ѭ������)
*	{
*		(ѭ�����)
	}
	���ͣ�ֻҪѭ������Ϊ�棬��ִ��ѭ�����
	(2)do......whileѭ�����
	do
	{
		ѭ�����;
	}while(ѭ������);
	Attention:��while ����������do-while����ִ��һ��ѭ����䣬���ж�ѭ������
* -----------forѭ��---------------------------------
* ��ʽ��for(��ʼ���ʽ;�������ʽ;ĩβѭ����){ ѭ���� }
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
//		cout << "������һ����λ��:" << endl;
//		int num;
//		cin >> num;
//		int baiwei = num / 100;
//		int shiwei = (num - baiwei * 100) / 10;
//		int gewei = num - baiwei * 100 - shiwei * 10;
//		cout << "�����������Ϊ:" << num << endl;
//		cout << "��λ:" << gewei << endl;
//		cout << "ʮλ:" << shiwei << endl;
//		cout << "��λ:" << baiwei << endl;
//		int num1 = gewei ^ 3 + shiwei ^ 3 + baiwei ^ 3;
//		if (num1 == num)
//		{
//			cout << "�����������ˮ�ɻ�����" << endl;
//		}
//		else
//		{
//			cout << "�������������ˮ�ɻ�����" << endl;
//		}
//	} while (true);	*/
//	system("pause");
//	return 0;
//}