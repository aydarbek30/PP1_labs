#include <bits/stdc++.h>  //Aydarbek
using namespace std;

string a,b;

char c;

bool mem[100];


int main(){

cin>>a;
cin>>b;
cin>>c;

for(int i=0; i<(int)b.length(); i++){
		mem[b[i]-'a']=1;
}
	for(int i=0; i<(int)a.length(); i++){
		if(mem[a[i]-'a']){
			a[i]=c;
}
}
	cout<<a;


	return 0;
}
