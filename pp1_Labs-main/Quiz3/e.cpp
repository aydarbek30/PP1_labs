#include <bits/stdc++.h> //AYDARBEK
using namespace std;


#define ll long long
ll kek;
string s;

int main(){


	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		kek += (s[i]>='0' && s[i]<='9') * (s[i]-'0');
	}
	cout<<kek;



	return 0;
}
