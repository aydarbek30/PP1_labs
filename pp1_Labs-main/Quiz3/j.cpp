#include <bits/stdc++.h>   //Aydarbek
using namespace std;

bool kek(string s, int len){
	for(int i=0, j=len-1; i<j; i++, j--){
		if(s[i]!=s[j]){
			return 0;
}
}
	return 1;
}


bool kot(string s, int len){
	for(int i=1; i<len; i++){
		if(s[i]!=s[i-1]){
			return 1;
}
}
	return 0;
}

string s;
int mem;


int main(){
	cin>>s;
	mem=(int)s.length();
	cout<<(mem-kek(s, mem))*kot(s, mem);
}
