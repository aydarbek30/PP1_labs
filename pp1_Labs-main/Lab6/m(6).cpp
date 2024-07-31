#include <iostream> //aydarbek

using namespace std;

void kek(int n, int m[])
{
    int a;

    for(int i = 0; i < n/2; i++){
        a = m[i];
        m[i] = m[n-i-1];
        m[n-i-1] = a;
    }
    for(int i = 0; i < n; i++){
        cout << m[i] << " ";
    }
}

int main()
{
    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    kek(a, arr);

    return 0;
}