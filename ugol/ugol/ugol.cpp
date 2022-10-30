#include <iostream>

using namespace std;

int main()
{
	int ch, m, ugol;
	cout << "hours = ";
	cin >> ch;
	cout << "minutes = ";
	cin >> m;
	ugol = (ch % 12) * 30 - m * 6;
	cout << ugol << endl;

}