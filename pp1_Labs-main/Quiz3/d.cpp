#include <bits/stdc++.h>  //AYDARBEK
using namespace std;

int n;

string s="0123456789ABCDEF";
string ss=" ";

int main(){
cin>>n;

	while(n>0){
		ss += s[n%16];
		n /= 16;

}
	reverse(ss.rbegin(), ss.rend());
	cout<<ss;


	return 0;
}
