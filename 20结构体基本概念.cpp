#include<iostream>
using namespace std;

/*********************************************************************************************
* 1.Basic Conception
*	A structure is a user-defined data types that allow users to store different data types.
* 2.Structure definition and usage
*	Grammer: struct StructureName { list of structure members};
* 3.There are three ways to create a variable from a structure.
*	one:	struct StructureName variable name
*	two:	struce StructureName variable name = { item1 value, item2 value......}
*	three:	Creat varialble as you define the structure
*********************************************************************************************/
struct Student
{
	string name;
	int age;
	string sex;
	int score = 2;
	string number;	
}s3;

//int main()
//{
//	struct Student s1;
//	s1.name = "����";
//	s1.age = 22;
//	s1.sex = "man";
//	s1.score = 99;
//	s1.number = "1234567890";
//	cout << "������" << s1.name << " ���䣺" << s1.age << " �Ա�" << s1.sex << " ������" << s1.score << " �绰���룺" << s1.number << endl;
//	
//	struct Student s2 = { "��÷",24,"man",98,"1223987666" };
//	cout << "������" << s2.name << " ���䣺" << s2.age << " �Ա�" << s2.sex << " ������" << s2.score << " �绰���룺" << s2.number << endl;
//
//	s3.name = "�";
//	s3.age = 22;
//	s3.sex = "man";
//	s3.score = 99;
//	s3.number = "1234567890";
//	cout << "������" << s3.name << endl;
//
//	system("pause");
//	return 0;
//}