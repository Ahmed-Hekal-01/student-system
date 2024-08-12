#include"repository.cpp"
#include"Validation.cpp"
class TeacherService
{
public:
	virtual int AddTeacher(Teacher t) = 0;
	virtual Teacher  GetTeacherById(int id) = 0;
};
class TeacherServiceImp :public TeacherService
{
private:
	TeacherRepositoryImp  teacherRepository;
	TeacherValidation teacherValidation;
	Teacher teacherresult;
public:
	int AddTeacher(Teacher t)
	{
		if (teacherValidation.ValidateTeacher(t) == 1)
		{
			int id = teacherRepository.AddTeacher(t);
			if (id == -1)
			{
				cout << " Full Course!" << endl;
			}
			else
			{
				return id;
			}

		}
		else
			return -1;
	}
	Teacher GetTeacherById(int id)
	{
		teacherresult =  teacherRepository.GetTeacherById(id);
		if (teacherresult.getId() == -1)
		{
			teacherValidation.NotExist("Teacher", id);
		}
		return teacherresult;
	}
};
class CourseService
{
public:
	virtual int AddCourse(Course c) = 0;
	virtual Course GetCourseById(int id) = 0;

};
class CourseServiceImp : public CourseService
{
private:
	CourseRepositoryImp courseRepository;
	CourseValidation courseValidation;
	Course courseresult;
public:
	int AddCourse(Course c)
	{
		if (courseValidation.CourseValidate(c) == 1)
		{
			int id = courseRepository.AddCourse(c);
			if (id == -1)
			{
				cout << " Full Course!" << endl;
			}
			else
			{
				return id;
			}

		}

		else
			return -1;
	}
	Course GetCourseById(int id)
	{
		courseresult = courseRepository.GetCourseById(id);
		if (courseresult.getId() == -1)
		{
			courseValidation.NotExist("Course", id);
		}
		return courseresult;
	}
	};
	class StudentService
	{
	public:
		virtual int AddStudent(Student s) = 0;
		virtual Student GetStudentById(int id) = 0;
	};

	class StudentServiceImp : public StudentService
	{
	private:
		StudentRepositoryImp studentRepository;
		StudentValidation studentValidation;
		Student studentresult;
	public:
		int AddStudent(Student s)
		{
			if (studentValidation.ValidateStudent(s) == 1)
			{
				int id = studentRepository.AddStudent(s);
				if (id == -1)
				{
					cout << " Full Student!" << endl;
				}
				else
				{
					return id;
				}

			}
			else
				return -1;
		}
		Student GetStudentById(int id)
		{
			studentresult = studentRepository.GetStudentById(id);
			if (studentresult.getId() == -1)
			{
				studentValidation.NotExist("Student", id);
			}
			return studentresult;
		}
	};
