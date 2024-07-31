#include<iostream>  //aydarbek
#include<cmath>

using namespace std;

int main(){

long long int a;
long long int b;
cin>>a;
cin>>b;


for(int i=-60; i<=60; i++){
    if( a*pow(2,i) == b ){
        cout<<"YES"<<" "<<i;
        return 0;
}
}


cout<<"NO";
}