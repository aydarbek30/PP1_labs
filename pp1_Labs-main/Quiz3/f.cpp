#include <bits/stdc++.h>   //Aydarbek
using namespace std;

int kek;
string s;
string s1="";

bool mem(char c){


	if(c>='0' && c<='9'){
		return 0;
}
	if(c>='A' && c<='Z'){
		return 0;
}
	return 1;
}

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if(mem(s[i])){
			s1 += s[i];
}
}
	cout<<s1;


	return 0;
}
