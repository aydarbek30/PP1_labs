#include <iostream>

using namespace std;

bool isPalindrome(string str) {
    for(int i = 0; i < str.size(); i++)
        if(str[i] != str[str.size() - 1 - i])
            return false;
    
    return true;
}

int main(){
    string line;
    cin >> line;

    for(int i = 0; i < str.size(); i++)
        if(str[i] != str[str.size() - 1 - i])
            return false;
    
    return true;

    line += line[0];

    if(isPalindrome(line))
        cout << "YES\n";
    else
        cout << "NO\n";
}
