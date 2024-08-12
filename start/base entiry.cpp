#include "shared data.cpp"
class BaseEntiry : public Shareddata {
private:
	int age;
	string phonenumber;
public:
	void setAge(int age)
	{
		this->age = age;
	}
	void setPhoneNumber(string phonenumber)
	{
		this->phonenumber = phonenumber;
	}

	int getAge()
	{
		return age;
	}

	string getPhoneNumber()
	{
		return phonenumber;

	}

	};