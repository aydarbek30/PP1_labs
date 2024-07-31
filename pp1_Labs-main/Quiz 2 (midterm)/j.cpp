#include<iostream>  //aydarbek

using namespace std;
int main(){

int max = -1;
int min =  100000;


string s;
cin>>s;


for(int i=0; i<s.size(); i++){
    if(s[i]-48 >= max){

          max = s[i]-48;
}
}


for(int i=0; i<s.size(); i++){
    if(s[i]-48 <= min){
    min=s[i]-48;
}
}


cout<<max<<" "<<min;
    return 0;
}