#include <bits/stdc++.h>  //Aydarbek
using namespace std;
#define ll long long



string s;
string smem="abcdefghijklmnopqrstuvwxyz", skek="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main(){
	getline(cin, s);

	
for(int i=(int)s.length()-1; i>=0; i--){
	if(s[i]>='a' && s[i]<='z'){
		s[i]=smem[(s[i]-'a'+1)%26];
}
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=skek[(s[i]-'A'+1)%26];
}
}


	cout<<s;

     return 0;
}
