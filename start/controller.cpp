#include"service.cpp"

class TeacherController
{
private:
	TeacherServiceImp teacherService;
	Teacher teacher;
public:
	int AddTeacher(Teacher t)
	{
		return teacherService.AddTeacher(t);
	}

	void ShowTeacherById(int id)
	{
		teacher = teacherService.GetTeacherById(id);
		if (teacher.getId() != -1)
		{
			cout << "\t\tID\t\t" << "Name\t\t" << "Age\t\t" << "Salary\t\t" << "PhomeNumber" << endl;
			cout << "\t\t" << teacher.getId() << "\t\t" << teacher.getName() << "\t\t" << teacher.getAge() << "\t\t" << teacher.getSalary() << "\t\t" << teacher.getPhoneNumber() << endl;
		}

	}
};
class CourseController
{
private:
	CourseServiceImp courseService;
	Course course;
public:
	int AddCourse(Course c)
	{
		return courseService.AddCourse(c);
	}
	void ShowCourseById(int id)
	{
		course = courseService.GetCourseById(id);
		if (course.getId() != -1)
		{
			cout << "\t\tID\t\t" << "Name\t\t" << "Hours\t\t" << endl;
			cout << "\t\t" << course.getId() << "\t\t" << course.getName() << "\t\t" << course.getHours() << endl;
		}
	}
}; 

class StudentController
{
private:
	StudentServiceImp studentService;
	Student student;
public:
	int AddStudent(Student s)
	{
		return studentService.AddStudent(s);
	}

	void ShowStudentById(int id)
	{
		student = studentService.GetStudentById(id);
		if (student.getId() != -1)
		{
			cout << "\t\tID\t\t" << "Name\t\t" << "Age\t\t" << "GPA\t\t" << "PhomeNumber" << endl;
			cout << "\t\t" << student.getId() << "\t\t" << student.getName() << "\t\t" << student.getAge() <<"\t\t"<<student.getGpa()<<"\t\t" << student.getPhoneNumber() << endl;
		}
	}
};