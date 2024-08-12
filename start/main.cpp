//#include"../models.cpp"
#include <bits/stdc++.h>
using namespace std;

void Displaysystem()
{
	cout << "\t\t**************** Management System **************** " << endl;
	cout << "Please Choose The Process : " << endl;
	cout << "1 - Students" << "\t\t" << "2 - Courses" << endl;
	cout << "3 - Teachers" << "\t\t" << "4 - Exit" << endl;
}
void ShowList(string value)
{
	cout << "\t\t**************** " << value << " Management System ****************" << endl;
	cout << "Please Choose The Process : " << endl;
	cout << "1 - Add " << value << "\t\t" << "2 - Remove " << value << endl;
	cout << "3 - Edit " << value << "\t" << "2 - Show " << value << endl;
	cout << "5 - Exit" << endl;
}

int main()
{

	int flag = 1, process;
	while (flag) {
		Displaysystem();
		cin >> process;
		switch (process)
		{
		case 1:
			ShowList("Student");
			int studentProcess;
			cin >> studentProcess;
			if (studentProcess == 1)
			{
				Student student;
			}
			break;
		case 2:
			ShowList("Course");
			break;
		case 3:
			ShowList("Teahers");
			break;
		case 4:
			flag = 0;
			break;
		default:
			cout << "Invalid Choice!" << endl;
		}
	}
}
