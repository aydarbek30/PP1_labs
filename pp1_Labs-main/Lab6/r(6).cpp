#include <iostream> //aydarbek

using namespace std;

string kek(string a)
{
    if(int(a[0]) > 96){
        a = char(int(a[0])-32);
    }
    
    return a;
}

int main()
{
    string a;
    cin >> a;

    cout << kek(a);

    return 0;
}