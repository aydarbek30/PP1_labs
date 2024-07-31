#include <iostream> //aydarbek

using namespace std;

double kek(double a, double b)
{
    return (b*100)/a;
}

int main()
{
    double a, b;
    cin >> a;
    cin >> b;

    cout << kek(a, b) << endl;

    return 0;
}