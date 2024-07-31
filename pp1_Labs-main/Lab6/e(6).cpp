#include <iostream> //aydarbek
#include <cmath>
#include <iomanip>

using namespace std;

void kek(int a, int b)
{
    double c;

    c = sqrt(a*a + b*b);

    cout << setprecision(4);
    cout << c;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    kek(a, b);

    return 0;
}