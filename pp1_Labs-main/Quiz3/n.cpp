#include <bits/stdc++.h>   //Adayrbek
using namespace std;
#define ll long long



string s, mem="";

int main(){


cin>>s;


for(int i=0; i<(int)s.length(); i++){
	if(s[i]>='a' && s[i]<='z'){
		mem+=s[i];
}
		if(s[i]>='A' && s[i]<='Z'){
		mem+=s[i];
}
}


	cout<<mem;

	return 0;
}
