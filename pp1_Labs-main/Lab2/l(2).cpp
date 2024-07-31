#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 0; pow(2,i) <= n; i++)
        cout << pow(2,i) << " ";

return 0;
}   