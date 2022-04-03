#pragma once
#include <iostream>
#include <string>

using namespace std;

class IntRange
{
	int first, second;
	public:
		IntRange();
		IntRange(int, int);
		IntRange(const IntRange&);
		~IntRange();

		int getfirst() const { return first; };
		int getsecond() const { return second; };
		void setfirst(int);
		void setsecond(int);

		bool Init(int x, int y);
		IntRange Read(IntRange);
		void Display(IntRange f);

		IntRange& operator = (const IntRange&);
		operator string() const;

		bool rangeCheck(int);

		friend ostream& operator << (ostream&, const IntRange&);
		friend istream& operator >> (istream&, IntRange&);

		IntRange& operator ++();
		IntRange& operator --();
		IntRange operator ++(int);
		IntRange operator --(int);
};

