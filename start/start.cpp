#include"controller.cpp"
#include <bits/stdc++.h>
using namespace std;
int id;
int process;
void Displaysystem()
{
	cout << "\t\t**************** School Management System **************** " << endl;
	cout << "Please Choose The Process : " << endl;
	cout << "1 - Students" << "\t\t" << "2 - Courses" << endl;
	cout << "3 - Teachers" << "\t\t" << "4 - Exit" << endl;
}
void ShowList(string value)
{
	if (value == "Course")
	{
		cout << "\t\t**************** " << value << " Management System ****************" << endl;
		cout << "Please Choose The Process : " << endl;
		cout << "1 - Add " << value << "\t\t" << "2 - Remove " << value << endl;
		cout << "3 - Edit " << value << "\t\t" << "4 - Show " << value << endl;
		cout << "5 - Show " << value << " By ID " << "\t" << "6 - Exit" << endl;
	}
	else
	{
		cout << "\t\t**************** " << value << " Management System ****************" << endl;
		cout << "Please Choose The Process : " << endl;
		cout << "1 - Add " << value << "\t\t" << "2 - Remove " << value << endl;
		cout << "3 - Edit " << value << "\t" << "4 - Show " << value << endl;
		cout << "5 - Show "<<value<<" By ID "<<"\t" << "6 - Exit" << endl;
	}
}

void StudentData()
{
	cout << "Please Enter Student Data: " << endl;
	Student student;
	cout << "Enter Student Name: ";
	string name;
	cin >> name;
	student.setName(name);
	cout << "Enter Student Age: ";
	int age;
	cin >> age;
	student.setAge(age);
	cout << "Enter Student PhoneNumber: ";
	string phoneNumber;
	cin >> phoneNumber;
	student.setPhoneNumber(phoneNumber);
	cout << "Enter Student Gpa: ";
	float gpa;
	cin >> gpa;
	student.setGpa(gpa);
	StudentController s;
	id = s.AddStudent(student);
	if (id == -1) return;
	else
	cout << "Student with id : [" << id << "] has been added successfully" << endl;
}
void TeacherData()
{
	cout << "Please Enter Teaher Data: " << endl;
	Teacher teacher;
	cout << "Enter Teacher Name: ";
	string name;
	cin >> name;
	teacher.setName(name);
	cout << "Enter Teacher Age: ";
	int age;
	cin >> age;
	teacher.setAge(age);
	cout << "Enter Teacher PhoneNumber: ";
	string phoneNumber;
	cin >> phoneNumber;
	teacher.setPhoneNumber(phoneNumber);
	cout << "Enter Teacher salary : ";
	float salary;
	cin >> salary;
	teacher.setSalary(salary);
	TeacherController t;
	 id = t.AddTeacher(teacher);
	if (id == -1) return;
	else
	cout << "Teacher with id : [" << id<<"] has been added successfully" << endl;
}
void CourseData()
{
	cout << "Please Enter Teaher Data: " << endl;
	Course course;
	cout << "Enter Teacher Name: ";
	string name;
	cin >> name;
	course.setName(name);
	cout << "Enter Course Hours : ";
	int hours;
	cin >> hours;
	course.setHours(hours);
	CourseController c;
	id = c.AddCourse(course);
	if (id == -1) return;
	else
	cout << "Course with id : [" << id << "] has been added successfully" << endl;
}
void ShowStudentById()
{
	cout << "Enter The Student ID: "<<endl;
	cin >> id;
	StudentController s;
	s.ShowStudentById(id);
	
}

void ShowCourseById()
{
	cout << "Enter The Student ID: " << endl;
	cin >> id;
	CourseController c;
	c.ShowCourseById(id);
}
void ShowTeacherById()
{
	cout << "Enter The Student ID: " << endl;
	cin >> id;
	TeacherController t;
	t.ShowTeacherById(id);
}
void StudentSwitch()
{
	switch (process)
	{
	case 1:
		StudentData();
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
		ShowStudentById();
		break;
	case 6:
		break;
	default:
		cout << "Invalid Choice!"<<endl;
	}
}
void CourseSwitch()
{
	switch (process)
	{
	case 1:
		CourseData();
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:
	
		break;
	case 5:
		ShowCourseById();
		break;
	case 6:

		break;
	default:
		cout << "Invalid Choice!" << endl;
	}
}

void TeacherSwitch()
{
	switch (process)
	{
	case 1:
		TeacherData();
		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:
		ShowTeacherById();
		break;
	case 6:
		break;
	default :
		cout << "Invalid Choice!" << endl;
	}
}

int main()
{

	int flag = 1;
	while (flag) {
		Displaysystem();
		cin >> process;
		switch (process)
		{
		case 1:
			ShowList("Student");
			cin >> process;
			StudentSwitch();
			break;
		case 2:
			ShowList("Course");

			cin>> process;
			CourseSwitch();
			break;
		case 3:
			ShowList("Teahers");
			cin >> process;
			TeacherSwitch();
			break;
		case 4:
			flag = 0;
			break;
		default:
			cout << "Invalid Choice!" << endl;
		}
	}
}
