#include <iostream> //aydarbek

using namespace std;

int kek(int a)
{
    if(a < 0){
        return -1*a;
    }
    else{
        return a;
    }
}

int main()
{
    int a;
    cin >> a;

    cout << kek(a) << endl;

    return 0;
}