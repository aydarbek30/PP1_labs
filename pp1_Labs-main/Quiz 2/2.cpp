#include <iostream>
#include <string>

using namespace std;


    string removeExlamationMarks(string s){
        
    string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '!'){

                continue;
            }
            ans += s[i];
        }
        return ans;
    }        

    int main() {
        string s;
        cin >> s;
        cout << removeExlamationMarks(s);
    }