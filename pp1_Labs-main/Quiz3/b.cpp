#include <bits/stdc++.h>   //aydarbek

using namespace std;

int main(){
string s;
char mem;


cin>>mem;
cin>>s;
    for(int i = 0; i < s.size(); i++){
    if(s[i] != mem){
        cout<<s[i];
}
}

return 0;


}