#include <iostream>
#include <string>

using namespace std;

void removeSpecialCharacters(string s){
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z') || (s[i] >='0' && s[i] <= '9') || (s[i] == '_') || (s[i] == '-')) {
            ans += s[i];
        }
    }
    s = ans;
    cout << ans;
}

int main (){
    string s;
    cin >> s;

    removeSpecialCharacters(s);
    return 0;
}