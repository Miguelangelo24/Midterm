// MidTerm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Human
{
private:

	string name;
	int age;
	char sex;

	Human()
	{
		name = "";
		age = 0;
		sex = '';
	}

protected:

	Human(string n, int a, char s)
	{
		setName(n);
		setAge(a);
		setSex(s);
	}


public:

	void setName(string n2)
	{
		name = n2;
	}

	void setAge(int a2)
	{
		age = a2;
	}

	void setSex(char s2)
	{
		sex = s2;
	}

	string getName()
	{
		return name;
	}

	string getAge()
	{
		return age;
	}

	string getSex()
	{
		return sex;
	}

	virtual void work()
	{

	}

};

class Parent : public Human
{
private:

	vector<Child> children;

public:

	void setChildren(Child c)
	{
	}

};

class Child : public Human
{
private:

	Parent Mom;
	Parent Dad;

	Child()
	{
		Mom;
		Dad;
	}

	friend class Parent;

public:

	Child(Parent m, Parent d)
	{
		Mom = m;
		Dad = d;
	}
};

int main()
{

	Human m1("Marge", 34, 'F');
	m1.setChildren(c);
	Human h1("Homer", 36, 'M');
	h1.setChildren(1);

	
    return 0;
}

