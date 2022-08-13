#include<iostream>
using namespace std;

/**************************************************************
* 1.The structure takes function paramaters.
*	Effect: Pass the structure as an parameter to the function.
* 2.There are two kinds of delivery.
*	one: value transmit
*	two: address transmit
* 3.Summary
*	If you don't want to modify the data in the main function, you can use value transmit, 
*	otherwise(on the contrary/whereas/conversely), you can use address transmit.
**************************************************************/
struct Student
{
	string name;
	int age;
	int score;
};
//Print student informations
//function1: value transmit
void PrintStudent(struct Student s)
{
	s.age = 100;
	cout << "Name: " << s.name << endl;
	cout << "Age: " << s.age << endl;
	cout << "Score: " << s.score << endl;
}
//function2: address transmit
void PrintStudent1(struct Student* p)
{
	p->age = 200;
	cout << "Name1: " << p->name << endl;
	cout << "Age1: " << p->age << endl;
	cout << "Score1: " << p->score << endl;
}

//int main()
//{
//	Student stu;
//	stu.name = "ZhangSan";
//	stu.age = 20;
//	stu.score = 100;
//
//	PrintStudent(stu);
//	cout << "stuName: " << stu.name << "stuAge" << stu.age << "stuScore" << stu.score << endl;	 
//
//	PrintStudent1(&stu);
//	cout << "stuName: " << stu.name << "stuAge" << stu.age << "stuScore" << stu.score << endl;
//
//	system("pause");
//	return 0;
//}