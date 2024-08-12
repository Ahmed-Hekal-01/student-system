#include"models.cpp"
class Data
{
public:
	static Teacher teachers[25];
	static Student students[25];
	static int studentid;
	static int courseid;
	static int teacherid;
	static Course courses[25];
	static int studentindex ;
	static int courseindex;
	static int teacherindex;
};
Teacher Data::teachers[25];
int Data::studentid = 1;
int Data::courseid = 1;
int Data::teacherid = 1;
int Data::studentindex = 0;
int Data::courseindex = 0;
int Data::teacherindex = 0;
Course Data::courses[25];
Student Data::students[25];
class TeacherRepository
{
public:
	virtual int AddTeacher(Teacher t) = 0;
	virtual Teacher  GetTeacherById(int id) = 0;

};

class TeacherRepositoryImp : public TeacherRepository
{

private:
	Data data;
	Teacher Invaildteacher;
public:
	int AddTeacher(Teacher teacher)
	{

		if (data.teacherindex == 25)
		{
			return -1;
		}
		else
		{
			teacher.setId(data.teacherid++);
			this->data.teachers[data.teacherindex] = teacher;
			data.teacherindex++;
		}
		return teacher.getId();
	}
	Teacher GetTeacherById(int id)
	{
		for (int i = 0; i < data.teacherindex; i++)
		{
			if (data.teachers[i].getId() == id)
			{
				return data.teachers[i];
			}
		}
		Invaildteacher.setId(-1);
		return Invaildteacher;
	}

};

class StudentRepository
{
public:
	virtual int AddStudent(Student s) = 0 ;
	virtual Student GetStudentById(int id) = 0;
};
class StudentRepositoryImp : public StudentRepository
{
private:
	Data data;
	Student Invaildstudent;
public:
	int AddStudent(Student student)
	{
		
		if (data.studentindex == 25)
		{
			return -1;
		}
		else
		{
			student.setId(data.studentid++);
			this->data.students[data.studentindex] = student;
			data.studentindex++;
		}
		return student.getId();
	}
	Student GetStudentById(int id)
	{
		for (int i = 0; i < data.studentindex; i++)
		{
			if (data.students[i].getId() == id)
			{
				return data.students[i];
			}
		}
		Invaildstudent.setId(-1);
		return Invaildstudent;
	}
};

class CourseRepository
{
public:	
	virtual int AddCourse(Course c) = 0;
	virtual Course GetCourseById(int id) = 0;

};

class CourseRepositoryImp :public CourseRepository
{
private:
	Data data;
	Course Invalidcourse;
public:

	int AddCourse(Course course)
	{

		if (data.courseindex == 25)
		{
			return -1;
		}
		else
		{
			course.setId(data.courseid++);
			this->data.courses[data.courseindex] = course;
			data.courseindex++;
		}
		return course.getId();
	}
	Course GetCourseById(int id)
	{
		for (int i = 0; i < data.courseindex; i++)
		{
			if (data.courses[i].getId() == id)
			{
				return data.courses[i];
			}
		}
		Invalidcourse.setId(-1);
		return Invalidcourse;
	}
};
