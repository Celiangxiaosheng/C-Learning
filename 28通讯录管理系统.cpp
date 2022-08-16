#include<iostream>
using namespace std;
#define Max 1000

//Design contact structure.
struct Contact
{
	string name;
	int gender;
	int age;
	string telephone_number;
	string address;
};

//Design address book structure.
struct AddressBook
{
	struct Contact contactsArray[Max];
	int m_Size; //number of people currently recorded in the address book.
};

//Encapsulating functions to display menu interfaces.
void showMneu()
{
	cout << "------------------------Welcome to Address Book Management system------------------------" << endl;
	cout << "\t\t\t" << "******************************************" << endl;
	cout << "\t\t\t" << "*****   1.Add a contact              *****" << endl;
	cout << "\t\t\t" << "*****   2.Displaying Contacts        *****" << endl;
	cout << "\t\t\t" << "*****   3.Deleting a Contact         *****" << endl;
	cout << "\t\t\t" << "*****   4.Finding Contacts           *****" << endl;
	cout << "\t\t\t" << "*****   5.Modifying Contacts         *****" << endl;
	cout << "\t\t\t" << "*****   6.Clearing Contacts          *****" << endl;
	cout << "\t\t\t" << "*****   0.Exiting the Address Book   *****" << endl;
	cout << "\t\t\t" << "******************************************" << endl;
}

//Encaosualting function to add contacts.
void AddContacts(AddressBook *abs)
{
	//Determine if the address book if full,and if so,do not add.
	if (abs->m_Size == Max)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//add contact
		//step1:name
		string name;
		cout << "Please input name：" << endl;
		cin >> name;
		abs->contactsArray[abs->m_Size].name = name;
		//step2:gender
		cout << "Please input gender：" << endl;
		cout << "1 -----------Man" << endl;
		cout << "2 -----------Woman" << endl;
		int gen = 0;
		while(true)
		{
			cin >> gen;
			if (gen == 1 || gen == 2)
			{
				abs->contactsArray[abs->m_Size].gender = gen;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		//step3:age
		int age = 0;
		cout << "Please input age：" << endl;
		cin >> age;
		abs->contactsArray[abs->m_Size].age = age;
		//step3:telephone number
		string number;
		cout << "Please input phone number：" << endl;
		cin >> number;
		abs->contactsArray[abs->m_Size].telephone_number = number;
		//step4:address
		string address;
		cout << "Please input Address：" << endl;
		cin >> address;
		abs->contactsArray[abs->m_Size].address = address;
		//step5:update the number of people in the address book.
		abs->m_Size++;
		cout << "添加成功" << endl;
		
		system("pause");
		system("cls");
	}
}
void DisplayContacts(AddressBook *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{		 
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << i+1 << "、" << "Name：" << abs->contactsArray[i].name << "\t"
				<< "Gender:" << (abs->contactsArray[i].gender == 1 ? "Man":"Woman") << "\t"
				<< "Age:" << abs->contactsArray[i].age<< "\t"
				<< "Phone:" << abs->contactsArray[i].telephone_number<< "\t"
				<< "Address:" << abs->contactsArray[i].address << endl;
		}		
	}
	system("pause");
	system("cls");
}
void main()
{
	//Create address book structure variables.
	AddressBook abs;
	//Initialize the current member in the address book.
	abs.m_Size = 0;

	int select = 0;  //Creates variables that the user selects for input
	while (true)
	{
		//step1:Invoking showMenu function
		showMneu();
		cin >> select;
		switch (select)
		{
		case 1:  //1.Add a contact
			AddContacts(&abs);
			break;
		case 2:  //2.Displaying Contacts
			DisplayContacts(&abs);
			break;
		case 3:  //3.Deleting a Contact
			break;
		case 4:  //4.Finding Contacts
			break;
		case 5:  //5.Modifying Contacts
			break;
		case 6:  //6.Clearing Contacts
			break;
		case 0:  //0.Exiting the Address Book
			cout << "Welcome to use it next time." << endl;
			system("pause");
			return;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return;
}