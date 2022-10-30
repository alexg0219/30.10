#include <iostream>

using namespace std;

int main()
{
	int h, t, v, x,tmax,tmin;
	cout << "h = ";
	cin >> h;
	cout << "t = ";
	cin >> t;
	cout << "v = ";
	cin >> v;
	cout << "x = ";
	cin >> x;

	if (h / t <= v && x < v)
	{
		tmax = h / v;
		tmin = (h - x * t) / (v - x);
		cout << tmin << endl;
		cout << tmax << endl;
	} 
	else
	{
		cout << "error" << endl;
	}
	
}