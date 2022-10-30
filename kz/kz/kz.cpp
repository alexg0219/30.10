#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14;
    double a, r;
    cout << "a=  r= ";
    cin >> a >> r;

    if (r <= a / 2)
        cout << pi * r * r << endl;
    else
        if (r >= (a * (sqrt(2) / 2)))
            cout << a * a << endl;
        else
        {
            double o = a * sqrt(4 * r * r - a * a) + r * r * (pi - 4 * asin(sqrt(1 - ((a * a) / (r * r * 4)))));
            cout << o << endl;

        }
}
