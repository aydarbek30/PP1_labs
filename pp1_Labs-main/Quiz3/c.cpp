#include <bits/stdc++.h>   //aydarbek
using namespace std;



int kek(int a, int b){

while(a*b!=0){
    if(a >b){


    a = a%b;
}

else{
    b = b%a;
}
}



    return a+b;
}





int main(){
int n;
int m[100];
cin>>n;

int c = 1;
    for(int i = 0; i < n; i++){
        cin>>m[i];
}
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            c = max(c,kek(m[i], m[j]));
}
}

    cout<<c;

    return 0;
}