#include <iostream>
#include "IntRange.h";

using namespace std;

int main()
{
    IntRange first(1,5);
    int n;

    cout << first << endl;
    cout << ++first << endl;
    cout << first << endl;
    cout << first++ << endl;
    cout << first << endl;

    IntRange in;
    cout << "Number: "; cin >> n;
    in.rangeCheck(n);

    IntRange n();
    IntRange b(first);

    cin.get();
    return 0;
}
