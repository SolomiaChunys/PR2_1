#include <iostream>
#include "IntRange.h";

using namespace std;

IntRange makeIntRange(int x, int y)
{
	IntRange in;
	if (!in.Init(x, y))
		cout << "wrong argument to Init!" << endl;

	return in;
}

int main()
{
	IntRange Read();
	IntRange first(2, 7);
	IntRange second(8, 10);
	IntRange in;
	int n;

	cout << "Number: "; cin >> n;

	cout << first++ << endl;
	in.rangeCheck(n);
	cout << first-- << endl;
	in.rangeCheck(n);
	cout << ++first << endl;
	in.rangeCheck(n);
	cout << --first << endl;
	in.rangeCheck(n);

	cin.get();
	return 0;
}