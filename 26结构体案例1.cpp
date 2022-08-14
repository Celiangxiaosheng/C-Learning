#include<iostream>
using namespace std;

/************************************************************************************
* 1.Case description
*	The school is doing a graduation project.Each teacher leads 5 students,
and there are three teachers in total.The requirements are as follows:
	Design the structure of students and teachers.In the structure of the teacher,
there are teacher's name and an array that stores 5 students as members.The members
of the students have names and test scores.Create an array to store 3 teachers,
and pass the function to each teacher and the students they are assigned,and finally
the teacher data and the student data brought by the teacher are printed out.
* 2.
**************************************************************************************/
//Create the student structure
struct Student
{
	string sName;
	int score;
};
//Create a teacher structure that contains an array of the students.
struct Teacher
{
	string tName;
	int age;
	struct Student sArray[5];
};
void allocateSpace(struct Teacher tAarray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tAarray[i].tName = "Teacher_";
		tAarray[i].tName += nameSeed[i];
		for (int j = 0; j < 5; j++)
		{
			tAarray[i].sArray[j].sName = "Student_";
			tAarray[i].sArray[j].sName += nameSeed[j];

			int random0 = rand() % 60; //0~59
			int random = rand() % 61 + 40; //40~100
			tAarray[i].sArray[j].score = random;
		}		
	}
};
void PrintInfo(struct Teacher tArray[], int len)
{
	for (int  i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
				" 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

//int main()
//{
//	//step0:random seed
//	srand((unsigned int)time(NULL));
//	//step1:Create an array of three teachers.
//	struct Teacher tArray[3];
//
//	/*step2:Use the function to assign values to the information of three teachers,
//	*		and assign values to the information of students brought by teacher.
//	*/
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	//stp3:Print the information of all teachers and their students.
//	PrintInfo(tArray, len);
//	system("pause");
//	return 0;
//}