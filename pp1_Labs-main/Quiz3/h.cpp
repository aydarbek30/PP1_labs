#include <bits/stdc++.h>   //Aydarbek
using namespace std;

struct kek{
	string mem;
	double r;
};

bool cmp(kek A, kek B){
	return(A.r<B.r);
}

int n;
string s;
double p,q;
kek a[100005];


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].mem;
		cin>>p>>q;
		a[i].r=p/q;
		
}
	sort(a, a+n, & cmp);
	cout<<a[0].mem;
}
