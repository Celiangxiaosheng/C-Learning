#include<iostream>
using namespace std;

/*******************************************
* 1.Case description
*	Design a hero structure,inculding member name��age,gender,create a structure array,and store
* 5 heroes in the array.Through the bubble sort algorithm,sort the heroes in the array in ascending
* order by age,and finally print the sorted result.
*/

//Create Hero structure.
struct Hero
{
	string name;
	int age;
	string sex;
};
//Assigen value for hero structure.
void allocateSpace(struct Hero hArray[], int len)
{
	string listname[5] = { "����","����","�ŷ�","����","����"};
	int listage[5] = {23,22,20,21,19};
	string listsex[5] = {"��","��","��","��","Ů"};
	for (int i = 0; i < len; i++)
	{
		hArray[i].name = listname[i];
		hArray[i].age = listage[i];
		hArray[i].sex = listsex[i];
	}
}
//Bubble sort for Hero structure by age. 
void BubbleSort(struct Hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}
//Print structure information
void PrintInfo(struct Hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{		 
		cout << hArray[i].name << ":  " << " ����:" << hArray[i].age << "  �Ա�" << hArray[i].sex << endl;
	}
}

//int main()
//{
//	struct Hero hArray[5];
//	int len = sizeof(hArray) / sizeof(hArray[0]);
//	allocateSpace(hArray, len);
//	cout << "����ǰ�Ľ����" << endl;
//	PrintInfo(hArray, len);
//	BubbleSort(hArray,len);
//	cout << "�����Ľ����" << endl;
//	PrintInfo(hArray, len);
//	system("pause");
//	return 0;
//}