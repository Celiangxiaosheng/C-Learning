#include<iostream>
using namespace std;

/****************************************************
* 1.Use scenarios for const in constructures.
*	Effect: Use const to prevent misoperations
* 2.Summary
*	cosnt: only read.
*	Notice: Pointer only occupy 4 space.
*****************************************************/

struct Student
{
	string name;
	int age;
	int score;
};

void PrintStudents(struct Student s)
{
	s.age = 180;
	cout << "Name:" << s.name << "  Age: " << s.age << "  Score: " << s.score << endl;
}

//If we change the parameter in the function to a pointer, we can reduce the memory space,and not copy a new transcrip.
void PrintStudents1(const Student *p)
{
	//p->age = 200;
	cout << "Name:" << p->name << "  Age: " << p->age << "  Score: " << p->score << endl;
}
//int main()
//{
//	//step1:Create a structure variable
//	Student stu = { "LIMING",20,80 };
//	cout << "In MAIN age of limig: " << stu.age << endl;
//	//step2:Function to print the structure body variable information.	
//	PrintStudents1(&stu);
//	cout << "In MAIN age of limig: " << stu.age << endl;
//	PrintStudents(stu);
//	//cout << "In MAIN age of limig: " << stu.age << endl;
//	system("pause");
//	return 0;
//}