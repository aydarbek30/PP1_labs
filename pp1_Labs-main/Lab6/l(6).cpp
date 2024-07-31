#include <iostream>  //aydarbek

using namespace std;
int kek(string s,int n){
int cnt=0;
    for(int i = 0 ; i<s.size();i++){
if(s[i]>='0' && s[i]<='9'){
        cnt++;
if(cnt==n){
return cnt;
}
i++;
        while(cnt!=n && s[i]>='0' && s[i]<='9'){
            cnt++;
            i++;
            if(i==s.size()){
                return cnt; 
}
}
if(cnt==n){
            return cnt;
}
else{
            cnt=0;
}
}   
}
return cnt;
}
int main(){
    string s;
    cin>>s;
int n,cnt = 0;
    cin>>n;
if(kek(s,n)==n){
        cout<<"Valid";
return 0;
}
    if(kek(s,n)!=n){
        cout<<"Not valid";
}
}