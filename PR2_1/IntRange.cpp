#include "IntRange.h"
#include <sstream>
#include <iostream>

IntRange::IntRange()
{
	first = 0;
	second = 2;
}

IntRange::IntRange(int f = 0, int s = 0)
{
	first = f;
	second = s;
}

IntRange::IntRange(const IntRange& f)
{
	first = f.first;
	second = f.second;
}

IntRange::~IntRange()
{ }

void IntRange::setfirst(int f)
{
	first = f;
}

void IntRange::setsecond(int s)
{
	second = s;
}

bool IntRange::Init(int x, int y)
{
	if (x < y)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void IntRange::Display(IntRange f)
{
	cout << string(f)<< endl;
}

IntRange IntRange::Read(IntRange f)
{
	int x, y;
	cout << "first =  ";cin >> x;
	cout << "second = ";cin >> y;
	f.Init(x, y);
	return f;
}


IntRange& IntRange::operator = (const IntRange& f)
{
	first = f.first;
	second = f.second;

	return *this;
}

IntRange::operator string () const
{
	stringstream sss;
	sss << "first = " << first << endl;
	sss << "second = " << second << endl;

	return sss.str();
}

ostream& operator << (ostream& out, const IntRange& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, IntRange& f)
{
	cout << " First = "; in >> f.first;
	cout << "Second = "; in >> f.second;
	cout << endl;
	return in;
}

IntRange& IntRange::operator ++()
{
	first++;
	return *this;
}

IntRange& IntRange::operator --()
{
	first--;
	return *this;
}

IntRange IntRange::operator ++(int)
{
	IntRange t(*this);
	second++;
	return t;
}

IntRange IntRange::operator --(int)
{
	IntRange t(*this);
	second--;
	return t;
}
bool IntRange::rangeCheck(int n)
{
	if (n >= first && n < second)
	{
		cout << "Yessss" << endl;
		return true;
	}
	else {
		cout << "Noooo" << endl;
		return false;
	}
};