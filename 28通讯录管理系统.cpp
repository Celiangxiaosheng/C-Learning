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
//Displaying contacts
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
				<< "Gender:" << (abs->contactsArray[i].gender == 1 ? "男":"女") << "\t"
				<< "Age:" << abs->contactsArray[i].age<< "\t"
				<< "Phone:" << abs->contactsArray[i].telephone_number<< "\t"
				<< "Address:" << abs->contactsArray[i].address << endl;
		}		
	}
	system("pause");
	system("cls");
}
//Detecting Contacts
int DetectContact(AddressBook *abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//Find the name entered by the usr
		if (abs->contactsArray[i].name == name)
		{
			return i;//if found,return the person's index in the array
		}
	}
	return -1;//don't find, return -1
}
//Deleteing Contacts
void DeleteContact(AddressBook * abs)
{
	cout << "Please you input delete name."<< endl;
	string name;
	cin >> name;
	int ret = DetectContact(abs, name);
	if (ret != -1)
	{
		//if find the person,performing the deletion operation
		for (int i = ret; i < abs->m_Size; i++)
		{
			//forward---->>>
			abs->contactsArray[i] = abs->contactsArray[i + 1];
		}
		abs->m_Size--;//update person namber
		cout << "Delete successfully." << endl;
	}
	else
	{
		cout << "The contact does not exist." << endl;
	}
	system("pause");
	system("cls");
}
//Finding contacts
void FindContacts(AddressBook* abs)
{
	cout << "Please enter the contact you are looking for." << endl;
	string name;
	cin >> name;
	int ret = DetectContact(abs,name);
	if (ret != -1)
	{
		cout << "Name:" << abs->contactsArray[ret].name << "\t";
		cout << "Gender:" << (abs->contactsArray[ret].gender == 1 ? "男":"女") << "\t";
		cout << "Age:" << abs->contactsArray[ret].age << "\t";
		cout << "Phone:" << abs->contactsArray[ret].telephone_number << "\t";
		cout << "Address:" << abs->contactsArray[ret].address << endl;
	}
	else
	{
		cout << "No such contact." << endl;
	}
	system("pause");
	system("cls");
}
//Modify contacts
void ModifyContacts(AddressBook* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = DetectContact(abs, name);
	if (ret != -1)
	{
		//name
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->contactsArray[ret].name = name;
		//gender
		cout << "请输入性别：" << endl;
		cout << "1------男" << endl;
		cout << "2------女" << endl;

		int sex = 0;
		while(true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->contactsArray[ret].gender = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}		
		//age
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0)
			{
				abs->contactsArray[ret].age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}				
		//phone
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->contactsArray[ret].telephone_number = phone;
		//address
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->contactsArray[ret].address = address;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//Clearing contacts
void ClearingContacts(AddressBook* abs)
{
	cout << "清空后通讯录将为空，请谨慎操作！" << endl;	
	cout << "1------------清空" << endl;
	cout << "2------------取消" << endl;
	int temp = 0;
	cin >> temp;
	if (temp == 1)
	{
		int size = 0;
		abs->m_Size = size;
		cout << "通讯录已清空" << endl;
	}
	else
	{
		cout << "已取消" << endl;
	}
	system("pause");
	system("cls");
}
void main()
{
	string name;
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
		{
			AddContacts(&abs);
		}			
			break;
		case 2:  //2.Displaying Contacts
		{
			DisplayContacts(&abs);
		}			
			break;
		case 3:  //3.Deleting a Contact			
		{
			/*cout << "Please enter the name you are looking for." << endl;
			cin >> name;
			if (DetectContact(&abs, name) == -1)
			{
				cout << "There is no such person." << endl;
			}
			else
			{
				cout << "Find the person." << endl;
			}*/
			DeleteContact(&abs);			 
		}			
			break;
		case 4:  //4.Finding Contacts
		{
			FindContacts(&abs);
		}			
			break;
		case 5:  //5.Modifying Contacts
		{
			ModifyContacts(&abs);
		}
			break;
		case 6:  //6.Clearing Contacts
		{
			ClearingContacts(&abs);
		}
			break;
		case 0:  //0.Exiting the Address Book
		{			
			cout << "Welcome to use it next time." << endl;
			system("pause");
			return;
		}			
			break;
		default:
			break;
		}
	}	
	system("pause");
	return;
}