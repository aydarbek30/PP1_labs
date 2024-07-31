#include <bits/stdc++.h>   //Aydarbek
using namespace std;




#define ll long long
string s;
ll mem, kek=1;



int main(){

	cin>>s;


for(int i=(int)s.length()-1; i>=0; i--){
	mem+=(s[i]-'0')*kek;
	kek*=2;
}
	cout<<mem;


	return 0;
}
