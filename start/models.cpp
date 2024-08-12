#include "base entiry.cpp"
class Teacher : public BaseEntiry {

private:
	float salary;
	int studentids[100];
public:
	void setSalary(float salary)
	{
		this->salary = salary;
	}	

	void setStudentIDS(int studentids[100])
		{
			for (int i = 0; i < 100; i++)
			{
				this->studentids[i] = studentids[i];
			}
		}

	float getSalary()
	{
		return salary;
	}

	int* getStudentIDS()
	{
		return studentids;
	}
};

class Course : public Shareddata
{
private:
	int hours;
	int studentids[25];
public:
	void setHours(int hours)
	{
		this->hours = hours;
	}
	void setStudentIDS(int studentids[25])
	{
		for (int i = 0; i < 25; i++)
		{
			this->studentids[i] = studentids[i];
		}
	}
	int* getStudentIDS()
	{
		return studentids; 
	}
	int getHours()
	{
		return hours;
    }
};
class Student : public BaseEntiry {
private:
	float gpa;
	Teacher teachers[5];
	Course courses[5];
public:
	void setGpa(float gpa)
	{
		this->gpa = gpa;
	}

	void setTeachers(Teacher teachers[5])
	{
		for (int i = 0; i < 5; i++)
		{
			this->teachers[i] = teachers[i];
		}
	}
	void setCourses(Course courses[5])
	{
		for (int i = 0; i < 5; i++)
		{
			this->courses[i] = courses[i];
		}
	}

	float getGpa()
	{
		return gpa;
	}

	Teacher* getTeachers()
	{
		return teachers;
	}
	Course* getCourses()
	{
		return courses;
	}

};

