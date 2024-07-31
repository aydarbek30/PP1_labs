#include <iostream> //aydarbek

using namespace std;

int kek(string s)
{
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        if(int(s[i])%2 == 1){
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    if(kek(s) == 0){
        cout << "Valid" << endl;
    }
    else{
        cout << "Not valid" << endl;
    }

    return 0;
}