#include <iostream> //aydarbek

using namespace std;

int kek(string s)
{
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        count = count+int(s[i])-48;
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    cout << kek(s) << endl;

    return 0;
}