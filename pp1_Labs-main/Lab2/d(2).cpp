#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    if (2 * n % k == 0 and 2 * n > k)
    {
        cout << ((2 * n) / k);
    }
    else if (2 * n % k != 0 and 2 * n > k)
    {
        cout << ((2 * n) / k + 1);
    }
    else
    {
        cout << "2";
    }
return 0;
}    