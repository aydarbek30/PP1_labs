#include <iostream>  //aydarbek
#include<algorithm>
#include<cmath>

using namespace std;

int main(){


int n;
int b;
int mem;

cin>>n;
cin>>b;
cin>>mem;

if(mem==1){
    for(int i=1; i*i<=b; i++){
        if(i*i>=n){
            cout<<i*i<<" ";
}
}
}

if(mem==-1){

     for(int i=b;  i>=0;  i--){
        if(i*i<=b  &&  i*i>=n){
            cout<<i*i<<" ";
}
}
}
    return 0;
}