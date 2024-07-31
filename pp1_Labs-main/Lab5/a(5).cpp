#include <iostream>
using namespace std;

int main () {

string s;

cin>>s;

int count = 0;
int count1 = 0;
for(int i = 0;i<s.size(); i++){

if(isupper(s[i])){
    count1++;
}
else {
    count1++;
}


}

cout<<count<<" " <<count1;



return 0;
}