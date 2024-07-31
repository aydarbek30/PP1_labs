#include <bits/stdc++.h>   //Adayrbek
using namespace std;
#define ll long long

string s;
char c;
int x, kek;

int main(){
cin>>s;
c =s[0];
x =1;
kek =1;


for(int i=1; i<(int)s.length(); i++){
	if(s[i]==s[i-1]){
		x++;
}

else{

	if(x>kek){
		c=s[i-1];
}
	kek=max(kek, x);
		x=1;
}
}
	if(x>kek){
		c=s[(int)s.length()-1];
}
	kek=max(kek, x);

	
	cout<<c<<" "<<kek;
}
