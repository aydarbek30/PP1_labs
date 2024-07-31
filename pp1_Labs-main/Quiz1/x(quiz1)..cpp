#include <iostream>  //aydarbek

using namespace std;
int main(){
int a, b, c;
cin >> a >> b >> c;


if(a==b and b!=c){
        cout<<"YES";
} 
else if(b==c and b!=a){
        cout<<"YES";
}
else if(c==a and a!=b){
        cout<<"YES";
} 
else{
        cout<<"NO";
} 
}