class StudentValidation
{
public: 
	int ValidateStudent(Student s)
	{
		if (s.getName().size() > 10 || s.getName().size() < 3)
		{
			cout << "Invalid Student Name!" << endl;
		}
		else if (s.getAge() > 30 || s.getAge() < 18)
		{
			cout << "Invalid Student Age!" << endl;

		}
		else if (s.getPhoneNumber()[0] != '0' ||
			(
				(s.getPhoneNumber()[1] + s.getPhoneNumber()[2]) != ('1' + '1') &&
				(s.getPhoneNumber()[1] + s.getPhoneNumber()[2]) != ('1' + '0') &&
				(s.getPhoneNumber()[1] + s.getPhoneNumber()[2]) != ('1' + '2') &&
				(s.getPhoneNumber()[1] + s.getPhoneNumber()[2]) != ('1' + '5')
				) ||
			s.getPhoneNumber().size() != 11
			)
		{
			cout << "Invalid Student PhoneNumber!" << endl;

		}
		else if (s.getGpa() >= 10 || s.getGpa() < 0)
		{
			cout << "Invalid Student GPA!" << endl;

		}
		else
		{
			return 1;
		}
		return -1;
	}
	void NotExist(string type, int id)
	{
		cout << type << " With [" << id << "] Not Exist!" << endl;
	}
};
class TeacherValidation
{

public:
	int ValidateTeacher(Teacher t)
	{
		if (t.getName().size() > 10 || t.getName().size() < 3)
		{
			cout << "Invalid Teacher Name!" << endl;
		}
		else if ((t.getPhoneNumber()[0] != '0' ||
			(
				(t.getPhoneNumber()[1] + t.getPhoneNumber()[2]) != ('1' + '1') &&
				(t.getPhoneNumber()[1] + t.getPhoneNumber()[2]) != ('1' + '0') &&
				(t.getPhoneNumber()[1] + t.getPhoneNumber()[2]) != ('1' + '2') &&
				(t.getPhoneNumber()[1] + t.getPhoneNumber()[2]) != ('1' + '5')
				) ||
			t.getPhoneNumber().size() != 11
			))
		{
			cout << "Invalid Teacher PhoneNumber!" << endl;
		}
		else if (t.getAge() > 70 || t.getAge() < 24)
		{
			cout << "Invalid Teacher Age!" << endl;

		}
		else if (t.getSalary() <= 100 || t.getSalary() < 1000)
		{
			cout << "Invalid Teacher Salary!"<<endl;
		}
		else
		{
			return 1;
		}
		return -1;
	}
	void NotExist(string type, int id)
	{
		cout << type << " With [" << id << "] Not Exist!" << endl;
	}
};
class CourseValidation
{
public:
	int CourseValidate(Course c)
	{
		if (c.getName().size() > 10 || c.getName().size() < 3)
		{
			cout << "Invalid Course Name!" << endl;
		}
		else if (c.getHours() > 3 || c.getHours() <= 0)
		{
			cout << "Invalid Course Hours!" << endl;
		}
		else
		{
			return 1;
		}
		return -1;
	}
	void NotExist(string type,int id)
	{
		cout << type << " With [" << id << "] Not Exist!" << endl;
	}
};