#include<iostream>
using namespace std;

/*********************************************
*
*/
//step1��Define Structure
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	//step2: build array of structure
	struct Student stuArray[3] =
	{
		{ "����",14,99},
		{ "��÷",45,100},
		{ "�",34,89}
	};
	//step2: Assign values to elements in a structure
	stuArray[2].name = "����";
	stuArray[2].age = 88;
	stuArray[2].score = 110;
	//step3: Traverse the array of sturctures
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name << " ���� " << stuArray[i].age << " ������" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}