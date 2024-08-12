#include <bits/stdc++.h>
using namespace std;
class Shareddata
{
private:
	string name;
	int id;
public:
void setName(string name)
	{
	this->name = name;
	}
void setId(int id)
{
	this->id = id;
}

string getName()
	{
	return name;
	}

int getId()
{
	return id;
}
};