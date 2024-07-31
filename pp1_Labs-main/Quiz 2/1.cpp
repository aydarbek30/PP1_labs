//aydarbek amatov 21b031085
#include <iostream>
#include <string>


using namespace std;


string toAlternatingCase(string s){
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            ans += s[i];
            continue;
        }
        if(isupper(s[i])){
            ans += char(tolower(s[i]));
        }
        else{
            ans += char(toupper(s[i]));
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout<< toAlternatingCase(s);
    return 0;
}