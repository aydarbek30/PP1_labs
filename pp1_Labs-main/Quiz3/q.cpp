#include <bits/stdc++.h>   //Aydarbek
using namespace std;
#define ll long long



string s, x="moc.liamg@";
int mem;

bool kek(){
int j=0;
for(int i=mem-1; i>=mem-10; i--){
	if(s[i]!=x[j]){


		return 0;
}
	j++;
}


	return 1;
}

int main(){
int n;
cin>>n;


for(int i=0; i<n; i++){
	cin>>s;
	mem=(int)s.length();
	if(kek()){
		string s1=s.substr(0,  mem-10);



		cout<<s1<<endl;


}
}


return 0;


}