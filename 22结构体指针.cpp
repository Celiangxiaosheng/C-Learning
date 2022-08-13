#include<iostream>
#include<string>
using namespace std;

/******************************************************************************
* 1.Structure pointer
*	Effect: Members in a structure are accessed through Pointers.
* With the operator ->, 
	you can access the properties of a structure through a structure pointer.
*
******************************************************************************/
//1.Creat the student structure.
struct Student
{
	string name;
	int age;
	int score;
};
//int main()
//{
//	//step1:Create the student structure variable
//	Student s = { "LiMing", 18, 100 };
//	//step2:A pointer to a structure
//	Student* p = &s;
//	//step3:Access data in structure variables through Pointers.
//	cout << "姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;
//	system("pause");
//	return 0;
//}