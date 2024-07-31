#include <bits/stdc++.h>    //Aydarbek
using namespace std;

int n,m[70];
bool kek[70];
char c[70];
string s;

int main(){

getline(cin, s);

for(int i=0; i<(int)s.length(); i++){
		m[s[i]-'A']++;
}
	cin>>n;

for(int i=0; i<n; i++){
		cin>>c[i];
		kek[c[i]-'A']=1;
}

for(int i=0; i<60; i++){
		if(kek[i]){
			cout<<(char)(i+'A')<<" - "<<m[i]<<endl;
}
}
}
