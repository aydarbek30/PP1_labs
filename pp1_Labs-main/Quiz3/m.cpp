#include <bits/stdc++.h>   //Aydarbek
using namespace std;
#define ll long long



string s;
int kek;

int main(){
	cin>>s;
for(int i=0; i<(int)s.length(); i++){

		kek+=s[i];
}
	if(kek<300){

		cout<<"Oh, no!";
}


else{
		cout<<"It is tasty!";
}


	return 0;
}
