#include<iostream>
using namespace std;

/*******************************************************************
* 1.A structure is nested within a sturcture
*	Effect: Another construct that a member of a construct can be.
*	For Example: Each teacher tutors a student,
*	In a teacher's structure, record a student's structure.
********************************************************************/
//Creat the student structure
struct Student
{
	string name;
	int id;
	int age;
	int score;
};
//Creat the teacher structure
struct Teacher
{
	string name;
	int id;
	int age;	
	Student stu;
};
//int main()
//{
//	Teacher t;
//	t.name = "李明";
//	t.id = 1234567;
//	t.age = 39;
//	t.stu.name = "王同学";
//	t.stu.id = 1941008;
//	t.stu.age = 18;
//	t.stu.score = 90;
//	system("pause");
//	return 0;
//}